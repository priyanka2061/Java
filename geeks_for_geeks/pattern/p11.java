/*
 *  1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

 */
public class p11 {
    public static void main (String args[])
    {
    int k=1;
    
          for(int i=1; i<=5;i++)  
          {
            for(int j=1;j<=5-i;j++)
            {
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++)
            {     int t=Math.abs(j-i);
                System.out.print( t+k+" "  );
            }
            k++;
            System.out.println();
          }
    
}
}
