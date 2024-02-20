#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    int lo=0;
    int hi=n-1;
    while(lo<=hi){
         int mid = lo+(hi-lo)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) hi = mid-1;
        else lo = mid+1;
    }
    return 0;

}