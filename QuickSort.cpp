#include<iostream>
using namespace std;
int partition(int arr[], int s, int e){
    int pivot=arr[s];
    int count=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    // pivot ko uske sahi position prr dalna hoga 
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);

    // left and right wala part ab smbhalte hai 

    int i=s, j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j++]);

        }

    }
    return pivotIndex;

}
void quickSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    //partition Karenge:
    int p=partition(arr,s,e);

    // left wala part solve krte hai n :
    quickSort(arr,s,p-1);

    // right wala part solve krte hai n :
    quickSort(arr,p+1,e);
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    quickSort(arr,0,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}