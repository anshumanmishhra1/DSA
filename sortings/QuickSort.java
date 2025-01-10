package sortings;

import java.util.Scanner;

public class QuickSort {
    public static void swap(int arr[], int x, int y){
        int temp = arr[x];
        arr[x]=arr[y];
        arr[y]=temp;
    }

    public static int partition(int arr[], int s, int e){
        int pivotElement = arr[s];
        int counter = 0;
        for(int i=s+1;i<=e;i++){
            if(arr[i]<=pivotElement){
                counter++;
            }
        }
        int pivotIndex = s+counter;
        swap(arr,s,pivotIndex);

        int i =s;
        int j = e;
        while(i < pivotIndex && j > pivotIndex){
            while(arr[i]<=pivotElement) i++;
            while(arr[j]>pivotElement) j--;

            if(i<pivotIndex && j>pivotIndex){
                swap(arr,i,j);
                i++;
                j--;
            }
        }

        return pivotIndex;
    }

    public static void sort(int arr[], int s, int e){
        if(s>=e) return;
        int pivotIndex = partition(arr,s,e);
        sort(arr,s,pivotIndex-1);
        sort(arr,pivotIndex+1,e);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of the Array : ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements of the Array : ");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        sort(arr,0,n-1);
        System.out.println("Printing sorted Array : ");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
