import java.util.Scanner;

public class BlankLines {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int a, b, cas = 1;

        while (in.hasNextInt()) {
            if (cas > 1) System.out.print("\n"); // 2nd, more cases
            a = in.nextInt();
            b = in.nextInt();

            System.out.println("Case " + cas++ + ": " + a + " " + b + "\n");
        }
    }
}