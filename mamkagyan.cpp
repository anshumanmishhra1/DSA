// Online C++ compiler to run C++ program online to find sum of array elements: 

// #include <iostream>
// using namespace std;
// int main() {
//     // Write C++ code here
//     int n;
//     cout<<"enter size of the array: "<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
        
//         sum=sum+arr[i];
//     }
    
//     cout<<sum<<endl;
//     return 0;
// }

/* Question : write to print count of posivtive number: */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int count =0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>0){
//             count++;
//         }
//     }
//     cout<<count;
//     return 0;
// }


/* Multidimensional Array : */

// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }

//     //printing 2d-array 
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }



/* Question : Write a C++ program to separate even and odd numbers in
 an array of integers. Put all even numbers first, and then odd numbers.
*/


// mehman wala code
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){ // ha piyunga
        cout<<"Piyunga ji😃"<<endl;
    }
    else{
        cout<<"tor mai k boomer, ek bari mein smjh mein nahi ata piyunga mtlb piyunga😠"<<endl;
    }
    return 0;
}