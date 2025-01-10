package basicMath;
import java.util.*;
public class practice {
    public static boolean checkHash(String str, int i, int j){
        HashMap<Character,Integer> mp = new HashMap<>();
        boolean flag = true;
        for(int k=i;k<j;k++){
            char ch = str.charAt(k);
            if(mp.containsKey(ch)){
                mp.put(ch,mp.get(ch)+1);
            }else{
                mp.put(ch,1);
            }
        }
        for(var ele : mp.entrySet()){
            if(ele.getValue()>1){
                flag = false;
                return flag;
            }
        }
        return flag;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the string");
        int n = sc.nextInt();
        System.out.println("Enter the string : ");
        String str = sc.next();
        int j=0;
        int count=0;
        for(int i = 0;i<n;i++){
            j = i+3;
            if(i<n-2 && checkHash(str,i,j)==true){
                count++;
            }
        }
        System.out.println(count);
    }
}
