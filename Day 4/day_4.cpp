#include <iostream>


using namespace std;

class Person{
private:
  int age;

public:
  Person(int initialAge);

  void amIOld();

  void yearPasses();

};

Person :: Person(int initialAge) {

      if (initialAge < 0)
        {
           age = 0;
           cout << "Age is not valid, setting age to 0." << endl;
         }
        else
        {
            age = initialAge;
        }
}

void Person :: amIOld()
{
  if (age < 13)
          {
            cout << "You are young." << endl;
          }
          else if(age >=13 && age < 18) 
          {
              cout << "You are a teenager." << endl;
          }
        else
           {
            cout << "You are old." << endl;
           }
}

void Person :: yearPasses()
{
  age += 1;
}

int main() {
  
  int T, age;

  cin >> T;

  for (int i = 0; i < T; i++) {

      cin >> age;
      Person p(age);
      p.amIOld();
      for (int j = 0; j < 3; j++) {
        p.yearPasses();
      }
       p.amIOld();
      cout << endl;
       }

  return 0
    }