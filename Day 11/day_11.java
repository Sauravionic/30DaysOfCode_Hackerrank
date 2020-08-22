import java.io.*;

public class Solution {



    private static final Scanner s= new Scanner(System.in);

    public static void main(String[] args) {
        int[][] arr = new int[6][6];
        int max = -1000, sum = 0;

        for(int i = 0; i < 6; i++)
        {
          for(int j = 0; j<6; j++)
           {
             arr[i][j] = s.nextInt();

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
         System.out.println(max);
      }
    }

 // This code takes the shortest time to execute the code (Optimized Code)