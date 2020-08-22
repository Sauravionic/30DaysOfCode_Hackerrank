#include <iostream>

using namespace std;

int main()
 {
    int arr[6][6];
        int max = -1000, sum = 0;

        for(int i = 0; i < 6; i++)
        {
          for(int j = 0; j<6; j++)
           {
             cin >> arr[i][j];

                if(i >=2 && j >= 2)
                  {
                    sum = arr[i][j-2]+arr[i][j-1]+arr[i][j] 
                                     +arr[i+1][j-1]+
                          arr[i+1][j-2]+arr[i+1][j-1]+arr[i+1][j];

                      if(sum > max)
                        {
                           max = sum;
                        }

                  }
           }
        }

        cout << max << endl;
        return 0;
 }