/* Factorial using recursion : 

#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){ //base case
        return 1;
    }

    // int smallerProblem=factorial(n-1);
    // int biggerProblem=n*smallerProblem;
    // return biggerProblem;

    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=factorial(n);

    cout<<ans;
    return 0;

}

*/


/* Power of the number 
 
#include<iostream>
using namespace std;
int power(int n){
    if (n==0){
        return 1;
    }

    int smallerProblem=power(n-1);
    return 2 * smallerProblem;
}
int main(){
    int n;
    cin>>n;
    int ans=power(n);
    cout<<ans;
    return 0;

}

*/

/* One example to understand recurssion better : */

// #include<iostream>
// using namespace std;
// void reachHome(int source, int destination){
//     cout<<"source is : "<< source<<"and destination is : "<<destination<<endl;
//     if(source==destination){
//         cout<<"le bhaiya omffo pahuch gya";
//         return;
//     }
//     source++;
//     reachHome(source,destination);
// }
// int main(){
//     int source=1;
//     int destination=10;
//     reachHome(source,destination);
//     return 0;

// }


/* LeetCode Problem: Fibonnaci using Recurssion  find nth fibonacci number */

// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     for(int i=1;i<n;i++){
//         int ans=fib(n-1)+fib(n-2);
//         return ans;

//     }
// }
// int main(){
//     int n;
//     cout<<"enter the nth element : "<<endl;
//     cin>>n;
//     int ans=fib(n);
//     cout<<ans;
//     return 0;

// }

// updated code: 
// class Solution {
// public:
//     int fib(int n) {
//         //base case
//         if(n==0){
//             return 0;
//         }
//         if(n==1){
//             return 1;
//         }

//         int ans=fib(n-1)+fib(n-2);
//         return ans;
//     }
// };



/* Question: Say digits */

// #include<iostream>
// using namespace std;
// void sayDigits(int n,string arr[]){
//     if(n==0){
//         return;
//     }
//     int digit=n%10;
//     n=n/10;

//     sayDigits(n,arr);
//     cout<<arr[digit]<<" ";

// }
// int main(){
//     string arr[10]={"zero","one", "two", "three","four",
//     "five","six","seven","eight","nine"};
//     int n;
//     cin>>n;
//     sayDigits(n,arr);
//     cout<<endl;
//     return 0;

// }


/* Check Array is Sorted or not using Recurssion*/


// #include<iostream>
// using namespace std;
// bool isSorted(int arr[], int size){
//     if(size==0 || size == 1){
//         return true;
//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }
//     else{
//         bool ans=isSorted(arr+1,size-1);
//         return ans;
//     }
// }
// int main(){
//     int arr[5]={2,4,6,8,9};
//     int size=5;
//     bool ans=isSorted(arr,size);
//     if(ans)
//     cout<<"array is sorted"<<endl;
//     else
//     cout<<"array is not sorted";
//     return 0; 

// }


/* Linear Search using Recurssion : to find the element in array*/

// #include<iostream>
// using namespace std;
// bool Search(int arr[],int size, int key){
//     if(size==0){
//         return false;
//     }
//     if(arr[0]==key){
//         return true;
//     }
//     else{
//         bool remainingPart=Search(arr+1,size-1,key);
//         return remainingPart;
//     }
// }
// int main(){
//     int arr[5]={3,5,1,2,6};
//     int size=5;
//     int key=9;
//     bool ans=Search(arr,size,key);
//     if(ans){
//         cout<<"present"<<endl;
//     }
//     else
//     cout<<"absent";
//     return 0;

// }


/*Binary Search Using Recurrsion : */

// #include<iostream>
// using namespace std;
// bool binarySearch(int arr[], int s, int e, int k){
//     if(s>e){
//         return -1;
//     }

//     int mid=s+(e-s)/2;

//     if(arr[mid]==k){
//         return true;
//     }
//     if(arr[mid]<k){
//         return binarySearch(arr,mid+1,e,k);
//     }
//     else{
//         return binarySearch(arr,mid-1,e,k);
//     }

// }
// int main(){
//     int arr[6]={2,4,6,10,14,16};
//     int size=6;
//     int key=16;

//     cout<<"present or not  "<<" "<<binarySearch(arr,0,5,key)<<endl;
//     return 0;

// }


/* Reverse a String using Recurssion : */

// #include<iostream>
// using namespace std;
// void reverse(string& str, int i, int j){
//     if(i>j){
//         return;
//     }
//     swap(str[i],str[j]);
//     i++;
//     j--;
//     reverse(str,i,j);
// }
// int main(){
//     string name="Anshuman";
//     reverse(name,0,name.length()-1);
//     cout<<name;
//     return 0;

// }


/* Check Palindrome using Recurssion*/

// #include<iostream>
// using namespace std;
// bool checkPalindrome(string str, int i, int j){
//     if(i>j){
//         return true ;
//     }
    
//     if(str[i]!=str[j]){
//         return false;
//     }
//     else{
//         return checkPalindrome(str,i+1,j-1);
//     }
// }
// int main(){
//     string name="seles";
//     bool isPalindrome=checkPalindrome(name,0,name.length()-1);

//     if(isPalindrome){
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"No";
//     }
//     return 0;

// }


// Finding Power using Recursion : */

// #include<iostream>
// using namespace std;
// int pow(int a, int b){
//     if(b==0){
//         return 1;
//     }
//     if(b==1){
//         return a;
//     }

//     int ans=pow(a,b/2);

//     if(b%2==0){
//         return ans*ans;
//     }
//     else{
//         return a*ans*ans;
//     }
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans= pow(a,b);
//     cout<<ans;
//     return 0;

// }


/* Question: print n to 1*/

#include<iostream>
using namespace std;
int print(int n){
    if(n==1){
        return 1;
    }
    return print(n-1);
    
}
int main(){
    int n;
    cin>>n;
    int p=print(n);
    cout<<p<<" ";
    return 0;

}


