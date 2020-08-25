#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

   Difference(vector<int> a)
{
    elements = a;
}


void Difference :: computeDifference()
   {
       int n = elements.size();
       int difference, max = 0;
       for(int i = 0; i<n-1; i++)
       {
           for(int j = i+1; j<n; j++)
            {
                difference = abs(elements[i] - elements[j]);
                if(difference > max)
                {
                    max = difference;
                }

            }
       }
       maximumDifference = max;
   }


}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}