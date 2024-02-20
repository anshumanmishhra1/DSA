/*📌Given a sorted integer array and an integer 'x', find
the lower bound of x


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int lo=0;
    int hi=n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            flag = true;
            cout<<arr[mid-1];
            break;
        }    
        else if(arr[mid]<x) lo = mid+1;
        else hi=mid-1;
    }

    if(flag==false){
        cout<<arr[hi];
    }

    return 0;

}

*/


/*📌 Given a sorted Array of n elements and a target 'x'. Find the
first occurence of 'x' in the array. if 'x' does not exist 
return -1


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int lo=0;
    int hi=n-1; 
    bool flag = false;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag = true;
                cout<<mid;
                break;
            }
            else{ //arr[mid-1] == x
                hi = mid-1;
            }
        }

        else if(arr[mid]<x) lo = mid+1;
        else hi = mid-1;
    }

    if(flag==false) cout<<-1;
    return 0;

}

*/


/*Smallest Missing positive number in an array
*/

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

    int lo=0;
    int hi=n-1; 
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;

        if(arr[mid]==mid) lo = mid+1;
        else{
            ans = mid;
            hi = mid-1;
        }
    }
    cout<<ans;
    return 0;

}
