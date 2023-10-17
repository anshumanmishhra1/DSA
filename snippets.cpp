// #include<iostream>
// #include<limits.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     int result=INT_MIN;
//     for(int i=0;i<n;i++){
//         int sum=arr[i];
//         for(int j=i+1;j<n;j++){
//             sum=sum+arr[j];
//             if(sum>result){
//                 result=sum;

//             }
//         }
//     }
//     cout<<result;
//     return 0;
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

// return 0;

// }

// #include<iostream>
// using namespace std;
// int countCube(int arr[],int n){
//     int count=0;
//     while(n!=0){
//         for(int i=0;i<n;i++){
//             if(i*i*i==arr[i]){
//                 count++;
//             }
//         }
//     }
//     return count;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // 1 4 27 28 25 33
//     int result=countCube(arr,n);
//     cout<<result;
   
//     return 0;

// }

// #include<iostream>
// using namespace std;

// int countCube(int arr[], int n) {
//     int count = 0;
//     int m=n-1;
//     while (m >= 0) {
//         for (int i = 0; i <= arr[m]; i++) {
//             if (i * i * i == arr[m]) {
//                 count++;
//             }
//         }
//         m--;
//     }
//     return count;
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int result = countCube(arr, n);
//     cout << result;

//     return 0;
// }
