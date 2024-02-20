/*📌Given a sorted array of n elements and a target 'x'.
Find the last occurence of 'x' in the array, if 'x' doesn't
exist return -1


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t;
    cin>>t;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int lo = 0;
    int hi = n-1;
    int ans;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(arr[mid]==t){
            if(t==arr[mid+1]){
                lo = mid+1;
            }
            else {
                ans = mid;
                cout<<ans;
                break;
            }
        }
        else if(arr[mid]>t){
            hi = mid-1;
        }

        else lo = mid+1;
    }
    return 0;

}

*/