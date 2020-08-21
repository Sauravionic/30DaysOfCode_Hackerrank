#include <iostream>

using namespace std;



int main()
{
    int n,count=0,max=0;
    int a;
    cin >> n;

    while(n > 0)
    {
       a = n % 2;
       if(a == 1) {
           count++;
         if(count > max) {
             max = count;
         }
       }
         else
         {
             count = 0;
         }
       n /= 2;
    }
    cout << max;

    return 0;
}
