/*📌SubArray of an Array */

#include<iostream>
#include<vector>
using namespace std;
void SubArray(vector<int> v, int arr[], int n,int idx){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    SubArray(v,arr,n,idx+1);
    if(v.size()==0 || arr[idx-1]==v[v.size()-1]){
        v.push_back(arr[idx]);
        SubArray(v,arr,n,idx+1);
    }
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    SubArray(v,arr,n,0);
    return 0;

}



/*📌Find out whether a given string is palindrome or not 
using recursion */