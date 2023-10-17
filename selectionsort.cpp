// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the array: "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter your arrays element for sorting: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //now sorting start
//     for(int i=0;i<n-1;i++){
//         int min=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[min]){
//                 min=j;
//             }
//         }
//         swap(arr[min],arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<< " ";
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[i]){
//                 swap(arr[j],arr[i]);
//             }
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//lets just check whether we can sort with this logic in c or not

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

// so we get to know that we can't use direct swap function in c