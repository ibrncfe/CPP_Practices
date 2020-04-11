// 
// virtual destructors and the person class
#include <iostream.h>
#include <string.h>                // for strlen(), strcpy() 
////////////////////////////////////////////////////////////////
class person                       // person class
   {
   protected:
      char* nameptr;
   public:
      person(char* np)             // 1-arg constructor
         {
         int length = strlen(np);      // find length of name
         nameptr = new char[length+1]; // allocate memory
         strcpy(nameptr, np);          // put name in memory
         }
      virtual ~person()=0         // destructor
         {
         cout << "\nperson Destructor"; 
         if(nameptr != NULL)       // if it has it been used,
            delete[] nameptr;      // delete name
         }
      virtual void putData()const =0
         { cout << "\nName = " << nameptr; }
   };  // end person class
////////////////////////////////////////////////////////////////
class gradStudent : public person  // gradStudent class
   {
   private:
      char* topicptr;              // ptr to thesis topic
   public:
      gradStudent(char* n, char* t) :   // 2-arg constructor
                                person(n), topicptr(NULL)
         {
         int length = strlen(t);        // find length of topic
         topicptr = new char[length+1]; // allocate memory
         strcpy(topicptr, t);           // put topic in memory
         }
      ~gradStudent()               // destructor
         {
         cout << "\ngradStudent destructor";
         if(topicptr != NULL)      // if it has it been used,
            delete[] topicptr;     // delete thesis topic
         }
      void putData() const
         {
         person::putData();
         cout << "\n  Thesis topic = " << topicptr;
         }
   };  // end gradStudent class
////////////////////////////////////////////////////////////////
void main(void)
   {
   int j;
   const int total = 3;
   person* persPtr[3];           // list of pointers to persons
   //person kk("fff");
   char name[40];                // temporary storage
   char topic[80];

   for(j=0; j<total; j++)        // get data, make gradStudents
      {
      cout << "\nEnter name: ";
      cin >> name;
      cout << "   Enter thesis topic: ";
      cin >> topic;
      persPtr[j] = new gradStudent(name, topic);
      }
   for(j=0; j<total; j++)        // display gradStudents
      persPtr[j]->putData();
   for(j=0; j<total; j++)        // delete gradStudents
      delete persPtr[j];
   }  // end main()

