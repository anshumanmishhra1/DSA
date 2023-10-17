// #include<iostream>
// using namespace std;
// // here we try to make a function for conquer:
// void conquer(int arr[],int si,int mi,int ei){
//     int merged=new int[ei-si+1]; // to know what is the actual size of the array
//     int idx1=si;
//     int idx2=mi+1;

//     while(idx1<=mi && idx2<<ei){
//         if(arr[idx1]<=arr[idx2]){
//             merged[x]=arr[idx1];
//             x++;
//             idx1++;
//         }
//         else{
//             merged[x]==arr[idx2];
//             x++;
//             idx2++;
//         }
//     }
//     while(idx1<=mid){
//         merged[x++]=arr[idx1++];

//     }
//     while(idx2<<ei){
//         merged[x++]=arr[idx2++];
//     }

//     for(int i=0,j=si;i<merged.length;i++,j++){
//         arr[j]=merged[i];
//     }

// }
// // first try to divide the sort untill it becomes single unit
// void divide(int arr[],int si, int ei,int mid,int mi){
//     if(si>=ei){
//         return;
//     }

//     int mid=si+(si-ei)/2;
//     divide(arr, si, mid); // divide it for first part
//     divide(arr, mid+1, ei); // divide it for second part
//     conquer(arr,si,mid,ei); // for this we have to create conquer function above the divide 
// }
// int main(){
//     int n;
//     cout<<"Enter the length of the Array"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements that you want to sort"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     divide(arr,0,n-1);

//     //printing the sorted array
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
//     return 0;
// }


/* Now we have understand lets make it final code :*/
#include<iostream>
using namespace std;
void merge(int arr[], int l, int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];
    int b[n2]; // temp arrays

    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=arr[i];
            k++;i++;
        }
        else{
            arr[k]=b[j];
            k++;j++;
        }
    }
    while(i<n1){
        arr[k++]=a[i++];
    }
    while(j<n2){
        arr[k++]=a[j++];
    }
}
void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid=(l+r)/2;

        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    mergeSort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
