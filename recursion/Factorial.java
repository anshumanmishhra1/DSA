package recursion;

import java.util.Scanner;

public class Factorial {
    public static int printFactorial(int n){
        if(n==0 || n==1) return 1;
        return n*printFactorial(n-1);
    }

    public static int sum(int n, int total) {
        if (n == 0) return total;
        return sum(n / 10, total + n % 10);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
//        System.out.println(printFactorial(n));
        int total=0;
        int res = sum(n,total);
        System.out.println(res);
    }
}
