// virtpers.cpp
// virtual functions with person class
#include <iostream.h>

class person                 // person class
   {
   protected:
      char name[40];
   public:
      virtual void getData()
         { cout << "   Enter name: "; cin >> name; }
      virtual void putData()
         { cout << "\nName = " << name; }
      virtual void isOutstanding()
         {  }                // note: empty function body
   };
                             // student class
class student : public person
   {
   private:
      float gpa;             // grade point average
   public:
      void getData()         // get student data from user
         {
         person::getData();
         cout << "   Enter student's GPA: ";
         cin >> gpa;
         }
      void putData()
         {
         person::putData();
         cout << "   GPA = " << gpa;
         }
      void isOutstanding()
         {
         if (gpa > 3.5)
            cout << " (This person is outstanding)";
         }
   };
                             // teacher class
class teacher : public person
   {
   private:
      int numPubs;           // number of papers published
   public:
      void getData()         // get teacher data from user
         {
         person::getData();
         cout << "   Enter number of teacher's publications: ";
         cin >> numPubs;
         }
      void putData()
         {
         person::putData();
         cout << "   Publications = " << numPubs;
         }
      void isOutstanding()
         {
         if(numPubs > 100)
            cout << " (This person is outstanding)";
         }
   };

void main(void)
   {
   person* persPtr[100];     // list of pointers to persons
   int n = 0;                // number of persons on list
   char choice;              // 'p', 's', etc.

   do
      {
      cout << "Enter person, student or teacher (p/s/t): ";
      cin >> choice;
      if(choice=='s')                  // put new student
         persPtr[n] = new student;     //    in array
      else if(choice=='t')             // put new teacher
         persPtr[n] = new teacher;     //    in array
      else                             // put new person
         persPtr[n] = new person;      //    in array

      persPtr[n++]->getData();         // get data for person
      cout << "   Enter another (y/n)? ";  // do another person?
      cin >> choice;
      } while( choice=='y' );          // cycle until not 'y'

   for(int j=0; j<n; j++)
      {                                // print names of all
      persPtr[j]->putData();           // persons, and
      persPtr[j]->isOutstanding();     // say if outstanding
      }
   }  // end main()
