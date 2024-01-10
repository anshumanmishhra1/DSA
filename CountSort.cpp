#include<iostream>
#include<string.h>
using namespace std;

void countSort(int arr[],int n){

    //now try to find the maximum element from the array
    int k=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>k){
            k=arr[i];
        }
    }

    int count[k+1]={0};

    int arr2[n];
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    //now we are updating the array :
    for(int i=1;i<=k;i++){
        count[i]=count[i]+count[i-1];
    }

    //puting the value of update array in new array
    for(int i=n-1;i>=0;i--){
        // arr2[count[arr[i-1]]-1]=arr[i];
        arr2[count[arr[i-1]] - 1] = arr[i];

    }

    //now we are copying the value of array2 in our main array
    for(int i=0;i<n;i++){
        arr[i]=arr2[i];
    }
}
int main(){
    int arr[100];
    int n;
    cout<<"enter the length of the array"<<endl;
    cin>>n;
    cout<<"Enter your elements in the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    countSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}