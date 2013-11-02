/**
 * problem: Kindergarten Counting Game
 * url: url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=&problem=435
 * authors: Rodrigo Alves
 * date: November 2, 2013
 */

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String line;
        boolean begin;
        int count;
        char[] words;

        while (input.hasNextLine()) {
            count = 0;
            begin = false;
            words = input.nextLine().toCharArray();

            for (char ch: words) {
                if (Character.isLetter(ch)) {
                   if (!begin) {
                       count++;
                       begin = true;
                   }
                } else {
                     begin = false;
                }
            }

            System.out.println(count);
        }

    }
}