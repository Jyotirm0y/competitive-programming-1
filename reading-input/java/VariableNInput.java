import java.util.Scanner;

public class VariableNInput {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int k, ans;

        while (in.hasNextInt()) {
            ans = 0;
            k = in.nextInt();

            while (k > 0) {
                ans += in.nextInt();
                k--;
            }

            System.out.println(ans);
        }
    }
}