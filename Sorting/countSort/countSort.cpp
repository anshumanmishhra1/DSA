// #include<iostream>
// #include<limits.h>
// using namespace std;
// int countSort(int a[],int n){
//     //first step is to find the maximum element
//     int max =INT_MIN;
//     for(int i=0;i<n;i++){
//         if(a[i]>max){
//             max = a[i];
//         }
//     }

//     int k = max;

//     int count[k+1] = {0};
//     int b[n];

//     for(int i=0;i<n;i++){
//         ++count[a[i]];
//     }

//     for(int i=1;i<=k;i++){
//         count[i] = count[i] + count[i-1];
//     }

//     for(int i=n-1;i>=0;i--){
//        b[--count[a[i]]]=a[i];
//     }

//     for(int i=0;i<n;i++){
//         a[i] = b[i];
//     }

    
// }
// int main(){
//     int n,k;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
   
//     countSort(a,n);
    
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }


//     return 0;

// }



#include<iostream>
#include<limits.h>
using namespace std;
void countSort(int arr[], int n){
    // find maximum element from the error 
    int k = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>k){
            k = arr[i];
        }
    }

    //after finding max Element create an array of k+1 size
    int count[k+1] = {0}; 
    
    //put the element to the index of count array and increment
    for(int i=0;i<n;i++){
        // ++count[arr[i]];
        int idx = arr[i];
        count[idx]++;
    }

    //update the count array
    for(int i=1;i<=k;i++){
        count[i] = count[i] + count[i-1];
    }

    //now try to put the values of arr[i] in b[i] and decreased
    int b[n];
    for(int i=n-1;i>=0;i--){
        b[--count[arr[i]]] = arr[i];
        // int ele = arr[i];
        // b[i] = count[ele]--;
    }

    for(int i=0;i<n;i++){
        arr[i] = b[i];
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    countSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}