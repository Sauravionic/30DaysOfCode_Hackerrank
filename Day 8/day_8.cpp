#include <iostream>
#include<map>

using namespace std;
int main()
{
    
    int n;
    string name;
    long num;
    cin >> n;
   
    map <string,long> phone;
    for (int i=0;i<n;i++)
    {
        cin >> name;
        cin >> num;
        phone[name] = num;
    }
    while(cin>>name) 
    {
        if (phone.find(name) != phone.end())
            cout << name << "=" << phone.find(name) -> second << endl;
        else
            cout << "Not found" << endl;
    }
    return 0;
}