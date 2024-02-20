#include<iostream>
#include<vector>
using namespace std;
int partition(int arr[],int si, int ei){
    //find pivot element and place it at its place
    int pivotElement = arr[(si+ei)/2];
    int count = 0;
    for(int i= si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotElement){
            count++;
        }
    }

    //find pivot index 
    int pivIndex = count + si;
    swap(arr[(si+ei)/2],arr[pivIndex]);

    int i = si;
    int j= ei;

    while(i<pivIndex && j>pivIndex){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivIndex;
    
}
void quickSort(int arr[], int si, int ei){
    if(si>=ei) return;
    int pi = partition(arr,si,ei);

    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);
}
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}