/**
 * problem: Palindromes
 * url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=342
 * authors: Rodrigo Alves
 * date: November 17, 2014
 */
import java.util.Scanner;
import java.math.BigInteger;

public class Main {
	public static boolean[] checkStr(String string) {
		// First: is palindrome?
		// Second: is mirrored string
		// Third: is mirrored palindrome

		boolean answer[] = {true, true, true, true};
		int len = string.length();

		for (int i = 0, j = len - 1; i < (len/2 + 1); i++, j--) {
			if (string.charAt(i) != string.charAt(j)) {
				answer[0] = false;
				break;
			}
		}

		return answer;
	}

	public static void main (String[] args) {
		String string;
		boolean verdict[];
		Scanner in = new Scanner(System.in);

		while (in.hasNextLine()) {
			string = in.nextLine();
			verdict = checkStr(string);

			if (verdict[0] == false) {
				System.out.println(string + " -- is not a palindrome.");
			} else {
				System.out.println(string + " -- is a regular palindrome.");
			}
		}
	}
}
