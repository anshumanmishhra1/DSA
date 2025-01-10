package recursion;

import java.util.Scanner;

public class FibonacciSeries {
    public static int fibo(int n){
        if(n==0) return 0;
        if(n==1) return 1;
        int prev = fibo(n-1);
        int prevPrev = fibo(n-2);
        return prev+prevPrev;

    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        int res = fibo(n);
        System.out.println(res);
    }
}
