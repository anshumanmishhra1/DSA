// // Maximum and minimum element in arrays

// #include<iostream>
// using namespace std;
// int getmin(int num[], int n){
//     int min=INTMAX_MAX;
//     for(int i=0;i<=n;i++){
//         if()
//     }
// }

/* UNDERSTANDING ARRAY: */

// #include<iostream>
// using namespace std;
// int main(){
//     //declaration of array
//     int x[5]; 

       //another way to declare
       // int x[5]={1,2,3,4,5};
//     //Initialsing of elements at particular index
//     // x[0]=6;
//     // x[1]=2;
//     // x[2]=8;
//     // x[3]=5;
//     // x[4]=0;


//     //how to insert elements in array
//     for(int i=0;i<=4;i++){
//         cin>>x[i];
//     }

//      //How to print array elements:

//     for(int i=0;i<=4;i++){
//         cout<<x[i]<<" ";
//     }
//     x[0]=100;
//     cout<<x[0]; // array updation
//     return 0;
// }



/* Passing Array to function :*/

// #include<iostream>
// using namespace std;
// // Array pass by reference hote hai
// void change(int arr[]){
//     arr[0]=9;
// }
// int main(){
//     int arr[3]={1,2,3};
//     change(arr); // we dont use brackets while passing function in array

//     // change hoga?? ha 1 ki jagah 9 hoga
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }

/* Question : Calculate the sum of all elements
int the given array */

// #include<iostream>
// using namespace std;
// int sumofArray(int arr[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cout<<"enter the size of your array: "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter Array's elements: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int result=sumofArray(arr,n);
//     cout<<"The sum of array is : "<<endl<<result;
//     return 0;
// }


/* Question : Calculate the sum of all elements
int the given array */

// #include<iostream>
// using namespace std;
// int productofArray(int arr[],int n){
//     int pro=1;
//     for(int i=0;i<n;i++){
//         pro=pro*arr[i];
//     }
//     return pro;
// }

// int main(){
//     int n;
//     cout<<"enter the size of your array: "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter Array's elements: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int result=productofArray(arr,n);
//     cout<<"The product of array is : "<<endl<<result;
//     return 0;
// }

/* Question: Find the max value of all elements*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     int arr[n];
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     int mx=arr[0];
//     for(int i=1;i<n;i++){
//         //this is also good method as its logical
//         // if(arr[i]>mx){
//         //     mx=arr[i];
//         // } 


//         // Using MAX function: 
//         mx=max(mx,arr[i]);
//     }
//     cout<<mx;
//     return 0;
// }


/* Question : Given an array of integer, change 
the value of all odd indexed elements to its 
seconf multiple and increment all even indexed
value by 10*/

// #include<iostream>
// using namespace std;

// int changes(int arr[], int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             arr[i]=arr[i]+10;
//         }
//         else{
//             arr[i]=arr[i]*2;
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the size of the Array : "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the Array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     changes(arr,n);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


/* Question : Count the number of elements
in gien array greater tha a given number x*/

// #include<iostream>
// using namespace std;

// int checkGreat(int arr[],int n,int x){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>=x){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     int n;
//     cout<<"Enter the size of Array: "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements: "<< endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"Enter the number to chose for greater: "<<endl;
//     cin>>x;

//     int result=checkGreat(arr,n,x);
//     cout<<result;
//     return 0;
// }


/* Question : wirte a programe t copy the contents
of array into another in reverse order*/

// #include<iostream>
// using namespace std;
// int reverse(int arr[],int n){
//     int temp[n];
//     for(int i=n;i<0;i--){
//         temp[i]=arr[i];
//     }

//     return temp[n];
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     reverse(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<reverse<<" ";
//     }
//     return 0;
// }


/* Question : Swap alternate element :*/

// #include<iostream>
// using namespace std;
// int swap(int arr[],int n){
//     for(int i=0;i<n;i=i+2){
//         if(i+1<n){
//             swap(arr[i],arr[i+1]);
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     swap(arr,n);

//     return 0;

// }


/* Question: Find unique element in an array: */

// #include<iostream>
// using namespace std;
// int find(int arr[],int n){
//     int result=0;
//     for(int i=0;i<n;i++){
//         result=result^arr[i];
//     }
//     return result;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ans=find(arr,n);
//     cout<<ans;
//     return 0;

// }


/* Question : Reverse an Array : */

// #include<iostream>
// using namespace std;

// int reverseArray(int arr[],int n){
//        for(int i=n-1;i>=0;i--){
//               cout<<arr[i]<<" ";
//        }
// }
// int main(){
//        int n;
//        cin>>n;
//        int arr[n];
//        for(int i=0;i<n;i++){
//               cin>>arr[i];
//        }
//        reverseArray(arr,n);
       
//        return 0;

// }


/* Trying to make it more optimised */
// #include<iostream>
// using namespace std;

// int main(){
//        int n;
//        cin>>n;
//        int arr[n];
//        for(int i=0;i<n;i++){
//               cin>>arr[i];
//        }
//        int m;
//        cin>>m;
//        for(int i=0;i<n-1;i++){
//               if(arr[i]==m+2){
//                      for(int j=i+1;j<n;j++){
//                             swap(arr[i],arr[j]);
//                      }
//               }
              
//        }

//        for(int i=0;i<n;i++){
//               cout<<arr[i]<<" ";
//        }
//        return 0;

// }


/* Question : find duplicates elements in an array :*/

// #include<iostream>
// using namespace std;

// int main(){
//        int n;
//        cin>>n;
//        int arr[n];
//        for(int i=0;i<n;i++){
//               cin>>arr[i];
//        }
//        int ans=0;
//        // 4 2 1 3 1
//        for(int i=0;i<n;i++){
//               ans=ans^arr[i];
//        }
//        for(int i=i;i<n;i++){
//               ans=ans^i;
//        cout<<ans;

//        }
       
//        return 0;

// }


/* Question : Intersection of two arrays : 
#include<iostream>
using namespace std;

int main(){
       int m,n;
       cin>>m>>n;
       int arr1[m];
       int arr2[n];
       for(int i=0;i<m;i++){
              cin>>arr1[i];
       }
       int ans;
       for(int i=0;i<n;i++){
              cin>>arr2[i];
       }

       for(int i=0;i<m;i++){
              for(int j=0;j<n;j++){
                     if(arr1[i]==arr2[j]){
                            ans=arr1[i];
                            cout<<arr1[i]<<" ";
                            break;
                     }
              }
       }
       return 0;

}

*/


/* Merge sorted Array : */

// #include<iostream>
// using namespace std;
// void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
//        int i=0,j=0;
//        int k=0;
//        while(i<n && j<m){
//               if(arr1[i]<arr2[j]){
//                      arr3[k++]=arr1[i++];
//               }
//               else{
//                      arr3[k++]=arr2[j++];
//               }
//        }

//        while(i<n){
//               arr3[k++]=arr1[i++];
//        }

//        while(j<m){
//               arr3[k++]=arr2[j++];
//        }
// }

// void print(int ans[],int n){
//        for(int i=0;i<n;i++){
//               cout<<ans[i]<<" ";
//        }
// }
// int main(){
//        int arr1[5]={1,3,5,7,9};
//        int arr2[3]={2,4,6};
//        int arr3[8]={0};

//        merge(arr1,5,arr2,3,arr3);
//        print(arr3,8);
//        return 0;

// }

/* Question :- character occurence in Array: */

// #include <iostream>
// #include <string>
// using namespace std;

// int count(string s, char c)
// {
// 	int res = 0;

// 	for (int i=0;i<s.length();i++)

// 		if (s[i] == c)
// 			res++;

// 	return res;
// }

// int main()
// {
// 	string str= "anshuman";
// 	char c = 'n';
// 	cout << count(str, c) << endl;
// 	return 0;
// }


/* print the roll no whose marks is less than 35

#include<iostream>
#include<set>
using namespace std;

int main(){
       int arr[7];
       for(int i=0;i<7;i++){
              cin>>arr[i];
       }

       for(int i=0;i<7;i++){
              if(arr[i]<35){
                     cout<<i<<" "<<arr[i];
              }
       }
       return 0;

}

*/

/* HOw to find the size of the array
#include<iostream>
#include<set>
using namespace std;

int main(){
       int arr[]={1,2,3,4,5,6,7,8,1,9,10};

       int n= sizeof(arr)/sizeof(arr[0]);
       cout<<n;
       return 0;

}

 
*/


/* FInd the second larget element in the array


#include<iostream>
#include<climits>
using namespace std;

int main(){
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
              cin>>arr[i];
       }

       int max = INT_MIN;
       int smax = INT_MIN;

       for(int i=0;i<n;i++){
              if(arr[i]>max){
                     max=arr[i]; 
              }
       }

       for(int i=0;i<n;i++){
              if(arr[i]!= max && smax<arr[i]){
                     smax=arr[i];
              }
       }

       cout<<smax;
       return 0;

}

 */



/* 📌 Passing Array to Function */

/* Understanding the function with array 
#include<iostream>
using namespace std;
void display(int a[]){
       for(int i=0;i<5;i++){
              cout<<a[i]<<" ";
       }
       cout<<endl;
       return;
}

void change (int b[]){
       b[0]=100;
}
int main(){
       int arr[5]={1,4,2,7,4};
       //accessing the elements of array in another function
       //updation, pass by value or by reference ?

       display(arr);
       change(arr);
       display(arr);
       return 0;

}

*/


/*📌 Array And Pointer */
