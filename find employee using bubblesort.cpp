//findemp.cpp
// sorted array class holds sorted employee objects
// finds employee with binary search
#include <iostream.h>
#include <string.h>
////////////////////////////////////////////////////////////////
class employee                  // employee class
   {
   private:
      enum { LEN=30 };          // maximum length of names
      char name[LEN];           // employee name
      unsigned long number;     // employee number
   public:
                                // 2-arg constructor
      employee(char* na, unsigned long nu) : number(nu)
         { strcpy(name, na); }

      void putdata() const      // display data
         {
         cout << "\n   Name = " << name;
         cout << "\n   Number = " << number;
         }
                                // return employee number
      unsigned long get_number() const
         { return number; }
   };
////////////////////////////////////////////////////////////////
class SortedArray
   {
   private:
      enum {SIZE=100};          // size of array
      employee* arr[SIZE];      // define array
      int total;              // number of objects in array
   public:
      SortedArray() : total(0)
         {  }
      employee* operator[](int) const;
      void insert(employee*);
      employee* search(unsigned long);
   };
                                // read data from element n
employee* SortedArray::operator[](int n) const
   { return arr[n]; }
                                // insert in sorted order
void SortedArray::insert(employee* data)
   {
   int j = 0;
   while(j < total &&         // find correct place
                    data->get_number() > arr[j]->get_number() )
      j++;
   for(int k=total; k>j; k--) // move higher elements up
      arr[k] = arr[k-1];
   arr[j] = data;             // insert new data
   total++;                   // now it has one more element
   }

// binary search for employee with specified employee number
employee* SortedArray::search(unsigned long num_to_find)
   {
   int lower = 0;                     // range of index numbers
   int upper = total;                 // to be searched
   int index;                         // place to look

   while(upper > lower)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
      {
      if(upper-lower > 1)
         index = lower + (upper-lower)/2;     // find middle
      else                                    // side-by-side
         index = upper = lower;               // merge them

      employee* ptr = arr[index];             // get ptr to emp
      unsigned long num = ptr->get_number();  // get emp number
      if(num == num_to_find)          // if exactly right,
         return ptr;                  // return pointer to emp
      if(num < num_to_find)           // if emp number too low,
         lower = index;               // move lower bound up
      else                            // if too high,
         upper = index;               // move upper bound down
      }
   return NULL;                       // no match
   }
////////////////////////////////////////////////////////////////
void main()
   {
   int j;
   SortedArray sa;              // a sorted array
   unsigned long number;        // number to find
   employee* pemp;              // ptr to found employee
   const int LIMIT = 10;        // number of employees

   employee emparr[LIMIT] =     // array of employees
     { employee("Webley", 468L),   // (note use of constructors
       employee("Suzuki", 672L),   // for initialization)
       employee("Smith", 371L),
       employee("Gonzalez", 274L),
       employee("Wong", 431L),
       employee("LeMonde", 789L),
       employee("Weinstein", 147L),
       employee("DeCarlo", 223L),
       employee("Nguyen", 390L),
       employee("O'Grady", 573L) };

   for(j=0; j<LIMIT; j++)       // insert address of each
      sa.insert(emparr+j);      // employee into SortedArray

   for(j=0; j<LIMIT; j++)       // display data in order
      {
      cout << "\nEmployee " << (j+1);
      sa[j]->putdata();
      }

    cout << "\n\nEnter employee number to search for: ";
    cin >> number;
    pemp = sa.search(number);   // search for employee
    if(pemp != NULL)
       {
       cout << "\nEmployee with that number is";
       pemp->putdata();
       }
    else
       cout << "\nNo such employee number in database.";
   }
