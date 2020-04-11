// sortemps.cpp
// sorted array class holds sorted employee objects
#include <iostream.h>
////////////////////////////////////////////////////////////////
class employee                  // employee class
   {
   private:
      enum { LEN=30 };          // maximum length of names
      char name[LEN];           // employee name
      unsigned long number;     // employee number
   public:
      void getdata()            // get data from user
         {
         cout << "\n   Name: "; cin >> name;
         cout << "   Number: "; cin >> number;
         }
      void putdata() const      // display data
         {
         cout << "\n   Name = " << name;
         cout << "\n   Number = " << number;
         }
      unsigned long get_number() const  // return emp number
         { return number; }
   };
////////////////////////////////////////////////////////////////
class SortedArray
   {
   private:
      enum {SIZE=100};
      employee* arr[SIZE];      // array of pointers to emps
      int total;                // number of emps in array
   public:
      SortedArray() : total(0)  // no-arg constructor
         {  }
      employee* operator[](int) const;  // declarations
      void insert(employee*);
   };
                                // read data from element n
employee* SortedArray::operator[](int n) const
   { return arr[n]; }
                                // insert in sorted order
void SortedArray::insert(employee* data)
   {
   int j = 0;
   while(j < total &&           // find correct place
                    data->get_number() > arr[j]->get_number() )
      j++;
   for(int k=total; k>j; k--)   // move higher elements up
      arr[k] = arr[k-1];
   arr[j] = data;               // insert new data
   total++;                     // now it has one more element
   }
////////////////////////////////////////////////////////////////
void main()
   {
   SortedArray sa;              // a sorted array
   employee* ptr;               // utility pointer
   char answer;                 // 'y' or 'n'
   int total = 0;               // number of employees in array

   do
      {
      ptr = new employee;       // make an employee
      cout << "Enter data for employee " << ++total << ": ";
      ptr->getdata();           // get employee data from user
      sa.insert(ptr);           // put employee in sorted array
      cout << "Do another (y/n)? ";
      cin >> answer;
      }
   while(answer != 'n');

   cout << "\nCONTENTS SORTED BY NUMBER" << endl;
   for(int j=0; j<total; j++)   // display data in order
      {
      cout << "\nEmployee " << (j+1);
      sa[j]->putdata();
      }
   }
