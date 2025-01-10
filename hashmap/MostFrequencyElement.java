package hashmap;
import java.util.*;
public class MostFrequencyElement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        Map<Integer,Integer> mp = new HashMap<>();
        for(int i=0; i<n; i++){
            if(mp.containsKey(arr[i])){
                mp.put(arr[i], mp.get(arr[i]) + 1);
            } else {
                mp.put(arr[i], 1); // Initialize count to 1 for first occurrence
            }
        }

        int maxFrequency=0;
        int mostFrequentElement=-1;

        for(var e : mp.entrySet()){
            if(e.getValue()>maxFrequency){
                maxFrequency=e.getValue();
                mostFrequentElement=e.getKey();
            }
        }

        System.out.println(mostFrequentElement);

    }
}
