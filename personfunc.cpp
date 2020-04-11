// persfunc.cpp
// passing pointers to objects that use virtual functions
#include <iostream.h>
#include <process.h>         // for exit()
////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////
class student : public person  // student class
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
////////////////////////////////////////////////////////////////
class teacher : public person  // teacher class
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
////////////////////////////////////////////////////////////////
void main(void)
   {
   person* persPtr[100];     // list of pointers to persons
   int n = 0;                // number of persons on list
   char choice;
   int j;

   person* getPerson();      // prototypes
   void displayPerson(person*);

   while(1)                  // cycle until exit
      {
      cout << endl
           << "'a' to add new person" << endl
           << "'d' to display all persons" << endl
           << "'x' to exit program" << endl
           << "Enter selection: ";
      cin >> choice;
      switch(choice)
         {
         case 'a':
            persPtr[n++] = getPerson();
            break;
         case 'd':
            for(j=0; j<n; j++)
               displayPerson( persPtr[j] );
            break;
         case 'x':
            for(j=0; j<n; j++)    // delete all person objects
               delete persPtr[j];
            exit(0);
            break;
         default:
            cout << "\nNo such selection";
         }  // end switch
      }  // end while
   } // end main()
////////////////////////////////////////////////////////////////
person* getPerson()          // function returns a person
   {
   person* tp;               // pointer to person
   char choice;

   cout << "Enter person, student or teacher (p/s/t): ";
   cin >> choice;
   if(choice=='s')           // put new student
      tp = new student;      //    in array
   else if(choice=='t')      // put new teacher
      tp = new teacher;      //    in array
   else                      // put new person
      tp = new person;       //    in array

   tp->getData();            // get data for person
   return tp;                // return pointer to person
   }  // end getPerson()'
////////////////////////////////////////////////////////////////
void displayPerson(person* pp)  // function displays a person
   {
   pp->putData();            // display data, and
   pp->isOutstanding();      // say if outstanding
   }  // end displayPerson()
