import java.util.Scanner;

public class BothZero {
  public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a, b;

        a = in.nextInt();
        b = in.nextInt();
        System.out.println(a + b);
        boolean cond = true;

        while (cond && in.hasNextInt()) {
            a = in.nextInt();
            b = in.nextInt();

            if (a == 0 && b == 0) {
                cond = false;
            } else {
                System.out.println(a + b);
            }
        }
    }
}
