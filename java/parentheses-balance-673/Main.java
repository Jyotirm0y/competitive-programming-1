/**
 * problem: Parentheses Balance
 * url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=614
 * authors: Rodrigo Alves
 * date: July 16, 2013
 */

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int cas = in.nextInt();
        String line, fstPart, secPart;
        boolean ans = false;
        
        in.nextLine();
        while (cas > 0) {
            if (ans == true) {
                 System.out.println("Yes");
            } else {
                 System.out.println("No");
            }
            
            cas--;
        }

    }
}
