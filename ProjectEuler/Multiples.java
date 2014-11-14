// author: Rodrigo Alves
// problem: Multiples of 3 and 5
// url: http://projecteuler.net/problem=1

public class Multiples {
    public static void main(String[] args) {
        int sum = 0, i = 1;

        for(; i < 1000; i++) {
            if (i % 3 == 0 || i % 5 == 0) sum += i;
        }

        System.out.println(sum);
    }
}