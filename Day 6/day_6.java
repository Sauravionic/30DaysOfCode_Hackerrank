import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);
        int t;
        String a;

         t = s.nextInt();

       while(t > 0)
    {
      a = s.next();

      for(int i = 0; i < a.length(); i++)

      {
          if(i % 2 == 0)
              System.out.print(a.charAt(i));
          
      }
      System.out.print(" ");
      for(int j = 0; j < a.length(); j++)

      {
          if(j % 2 != 0)
              System.out.print(a.charAt(j));
          
      }
     
       System.out.println();
       t--;
    }
    
    }
}
