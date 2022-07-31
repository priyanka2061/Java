/*      * * * * *   

      *       *

    *       *

  *       *

* * * * *
 */
public class p4 {
    public static void main(String args[])

    {
        int i, j;

        for (i = 1; i <= 9; i++) {
            for (j = 1; j <= 9 - i; j++) {
                System.out.print(" ");
            }
            for (j = 1; j <= 5; j++) {
                if (i == 1 || i == 9)
                    System.out.print("* ");
                else {
                    if ((j == 1 && i % 2 != 0) || (j == 5 && i % 2 != 0))
                        System.out.print("* ");
                        else
                        {
                            System.out.print("  ");
                        }
                }
            }
            System.out.println("  ");

        }
    }
}
