import java.io.*;


public class Solution {



    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {

        int a,max = 0,count = 0;
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        scanner.close();

        while(n > 0)
        {
          a = n % 2;
          if(a == 1)
          {
            count++;
            if(count > max)
            {
              max = count;
            }
          }
          else {
            count = 0;
          }
          n /= 2;
        }

       System.out.println(max);
    }
}
