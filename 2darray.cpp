/*Understanding 2d array by taking input and output */

// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     int x[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>x[i][j];
//         }
//     }
//     cout<<endl;
    
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<x[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/*Linear Search in 2D Array*/
// #include<iostream>
// using namespace std;
// bool isPresent(int arr[][5],int target,int m,int n){
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i][j]==target){
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
// int main(){
//     int arr[6][5];
//     for(int i=0;i<6;i++){
//         for(int j=0;j<5;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     int target;
//     cout<<"enter your target element: "<<endl;
//     cin>>target;
//     if(isPresent(arr, target,6,5)){
//         cout<<"Element found"<<endl;
//     }
//     else{
//         cout<<"Element not found"<<endl;
//     }
//     return 0;
// }


/* Question : Row-Wise Sum */

// #include<iostream>
// using namespace std;

// void printSum(int arr[][3], int i,int j){
//     cout<<"Printing rowwise sum ->"<<endl;
//     int sum=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             sum=sum+arr[i][j];
//         }
//     }
//     cout<<sum<<" ";
    
// }

// int main(){
//     int arr[3][3];
//     cout<<"Entet the elements : "<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     printSum(arr,3,3);
    
//     return 0;
// }

// /* Largest Row Sum: */

// #include<iostream>
// #include<limits.h>
// using namespace std;
// int largestSum(int arr[][3],int i,int j){
//     int maxi=INT_MIN;
//     int rowindex=-1;
//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             sum=sum+arr[i][j];
//         }
//         if(sum>maxi){
//             maxi=sum;
//             rowindex=i;
//         }
//     }
//     cout<<"The maximum sum is : "<<maxi<<endl;
//     return rowindex;
// }
// int main(){
//     int arr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         } 
//     }
//     int num=largestSum(arr,3,3);
//     cout<<"Max row is at index : "<<num<<endl;
//     return 0;
// }

/* Anuj method to find index of largest sum*/
#include <iostream>
#include<limits.h>
using namespace std;
int main(){
    int r,c;
    cout << "Enter the number of rows and columns: ";
    cin >> r >> c;
    int arr[r][c];
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cin >> arr[i][j];
        }
    }
    int index=0;
    int result=INT_MIN;
    for(int i=0 ; i<r ; i++){
        int sum=0;
        for(int j=0 ; j<c ; j++){
            sum=sum+arr[i][j];
        }
        if(sum>result){
            result=sum;
            index=i;
        }
    }
    cout<<"The maximum sum is : "<< result <<endl;
    cout<<"Max row is at index : "<< index <<endl;
    
    return 0;
}

/* Spiral Print */