package basicMath;
import java.util.*;
public class GCD {
    public  static int gcd(int a, int b){
        if(a==0 || b==0) return 1;
        while(a%b!=0){
            int temp = b;
            b = a%b;
            a=temp;
        }
        return b;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a= sc.nextInt();
        int b = sc.nextInt();
        int ans = gcd(a,b);
        System.out.println(ans);
    }
}
