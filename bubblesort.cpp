// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of your array"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Entet the element of your array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     //bubble sort start
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }

//     // printing sorted array 
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }

// }


// Now we are doing it using recurssion 

// #include<iostream>
// using namespace std;
// void sortArray(int arr[], int n){
//     if(n==0 || n== 1){
//         return ;
//     }
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     sortArray(arr,n-1);
// }
// int main(){
//     int arr[5]={2,5,1,6,9};
//     sortArray(arr,5);

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }

