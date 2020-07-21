// author: Rodrigo Alves Vieira
// problem: Multiples of 3 and 5
// url: http://projecteuler.net/problem=1
// status: AC
// submitted: June 25th 2020

public class Main {
    public static void main(String[] args) {
        int sum = 0, i = 1;

        for(; i < 1000; i++) {
            if (i % 3 == 0 || i % 5 == 0) sum += i;
        }

        System.out.println(sum);
    }
}
