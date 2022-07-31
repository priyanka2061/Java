/*   1 
   2 1
  3 2 1
 4 3 2 1
5 4 3 2 1
 */
public class p10 {
    public static void main (String args[])
    {
          for(int i=1; i<=5;i++)  
          {
            for(int j=1;j<=5-i;j++)
            {
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++)
            {     int t=Math.abs(j-i);
                System.out.print( t+1+" "  );
            }
            System.out.println();
          }
    }
    
}
