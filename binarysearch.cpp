// #include<iostream>
// using namespace std;

// int binarySearch(int arr[],int size,int key){
//     int start=0;
//     int end=size-1;
//     int mid=(start+end)/2;

//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         if(key>=arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=(start+end)/2;
//     }
//     return -1;

// }
// int main(){
//     int even[6]={2,4,6,8,12,18};
//     int odd[5]={3,8,11,14,16};

//     int evenindex=binarySearch(even,6, 12);
//     int oddindex=binarySearch(odd,5,11);
//     cout<<"Index of 12 is "<<evenindex<<endl;
//     cout<<"index of 11 is "<<oddindex<<endl;

// }


/* Question : Find first and last position of an element in sorted array */

#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int s=0, e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr [mid] == key){
            ans=mid;
            e=mid-1;
        }

        else if(arr[mid]<key){ // Right mein jao
            s=mid+1;
        }

        else if(arr[mid]>key){ // Left mein jao
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int s=0, e=size-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr [mid] == key){
            ans=mid;
            s=mid+1;
        }

        else if(arr[mid]<key){ 
            s=mid+1;
        }

        else if(arr[mid]>key){ 
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int even[5]={1,2,3,3,5};
    cout<<"First Occurence of 3 is at "<< firstOcc(even,5,3)<<endl;
    cout<<"Last Occurence of 3 is at "<< lastOcc(even,5,3)<<endl;
}


/* Find the peak index in a mountain without C(LeetCode question)*/
// int peakIndex(int arr[], int size){
//     int s=0;
//     int e=size-1;
//     int mid=s+(e-s)/2;

//     while(s<e){
//         if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }
//         else{
//             s=mid;
//         }
//     }
//     return s;

// }
