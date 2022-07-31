/*Print Inverted Half Pyramid.
1111
222
33
4
 */
public class p8 {
    public static void main (String args[])
    {
          for(int i=4; i>=1;i--)
          {
            for(int j=1;j<=4-i;j++)
            {
                System.out.print(" ");
            }
            for(int j=1;j<=(2*i)/2;j++)
            {
                System.out.print((4-i)+1);
            }
            System.out.println();
          }
    }
    
}
