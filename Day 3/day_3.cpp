#include <iostream>


using namespace std;

int main() {
  
  int N;

  cin >> N;

  if(N % 2 == 0)
        {
          if(N >= 2 && N <=5)
          {
            cout << "Not Weird";
          }
          else if(N >= 6 && N <= 20)
          {
            cout << "Weird";
          }
          else if(N > 20)
          {
            cout << "Not Weird";
          }
        }
        else
        {
          cout << "Weird";
        }
  return 0
    }