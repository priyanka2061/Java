/*     * * * * * 
     * * * * *
    * * * * *
   * * * * *
  * * * * * 
  */
public class p {
    public static void main (String args[])
    {    
        for(int i=0;i<5;i++)
        {
            for(int k=0 ;k<5-i ; k++)
            {
                System.out.print(" ");
            }
            for(int j=1; j<=5;j++)
            {
                System.out.print(" *");
            }
            System.out.println(" ");
        }
    }
    
}
