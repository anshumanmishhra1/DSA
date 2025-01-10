package heaps;

import java.util.PriorityQueue;
import java.util.Scanner;

public class KthLargest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the Element of the array : ");

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int k;
        System.out.println("Enter kth element");
        k=sc.nextInt();
        // 4 5 2 3 1 7 8 9

        PriorityQueue<Integer> q = new PriorityQueue<>();
        for(int i=0;i<k;i++){
            q.add(arr[i]);
        }

//        while(!q.isEmpty()){
//            System.out.print(q.peek()+" ");
//            q.poll();
//        }
        System.out.println(q);

        for(int i=k;i<n;i++){
            if(arr[i]>q.peek()){
                q.poll();
                q.add(arr[i]);
            }
        }
        System.out.println(q.peek());
    }
}
