package recursion;

public class IfPresentInArray {
    public static boolean isPresent(int arr[], int idx,int target){
        if(idx>=arr.length) return false;
        if(arr[idx]==target) return true;
        return isPresent(arr,idx+1,target);
    }
    public static void main(String[] args) {
        int arr[] = {2,3,4,5,1,9};
        int target = 8;
        if(isPresent(arr,0,target)){
            System.out.println("yes");
        }else{
            System.out.println("false");
        }
    }
}
