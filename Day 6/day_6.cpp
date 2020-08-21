#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    string a,b;
    
    while(t > 0)
    {

      cin >> a;

      for(int i = 0; i < a.length(); i++)

      {
          if(i % 2 == 0)
              cout << a.at(i);
          
      }

         cout << " ";

      for(int i = 0; i < a.length(); i++)

      {
          if(i % 2 != 0)
              cout << a.at(i);
          
      }

      cout << endl;
      t--;
    }
  }