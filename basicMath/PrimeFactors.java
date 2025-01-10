package basicMath;
import java.util.*;
public class PrimeFactors {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        while(n%2==0){
            arr.add(2);
            n/=2;
        }
        for(int i=3;i*i<n;i+=2){
            while(n%i==0){
                arr.add(i);

            }
        }
        if(n>2){
            arr.add(n);
        }
        for(int i=0;i<arr.size();i++){
            System.out.println(arr.get(i));
        }
    }
}
