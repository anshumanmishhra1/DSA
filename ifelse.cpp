//check greates of two numbers

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<< "Enter the value of A\n";
//     cin>>a;
//     cout<<"Enter the value of B\n";
//     cin>>b;
//     if(a>b){
//         cout<<"A is greatest "<<a <<endl;
//     }
//     else{
//         cout<<"B is greatest "<<b <<endl;
//     }
// }


//check whether the number is negative, positive of zero

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n\n";
//     cin>>n;
//     if(n>0){
//         cout<<"The number is positive "<<n <<endl;
//     }
//     else if(n==0){
//         cout<<"The number is zero "<<n <<endl;
//     }
//     else{
//         cout<<"The number is negative "<<n <<endl;
//     }

// }

// Q3. Write a C++ program to compute the sum of two given integer values. If the two values are the same, then return triple their sum

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y,sum;
//     cout<<"Enter first Number" <<endl;
//     cin>>x;

//     cout<<"Enter seoond Number" << endl;
//     cin>>y;

//     if(x==y){
//         sum=(x+y)*3;
//         cout<<sum;
//     }

//     else{
//         sum=x+y;
//         cout<<sum;
//     }
// }

// Q4. Write a C++ program to find the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.
/*
#include<iostream>
using namespace std;
int main(){
    int n,diff;
    cin>>n;
    if(n>51){
        diff=(n-51)*3;
        cout<<diff;

    }
    else{
        diff=51-n;
        cout<<diff;
    }
}
*/

// Q5.  Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30

/*
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int sum=x+y;
    if(x==30 || y==30 || sum==30 ){
        cout<<"1";
    }
    else
    cout<<"0";
}
*/

// Q6. Write a C++ program to check if a given positive number is a multiple of 3 or a multiple of 7.

#include<iostream>
using namespace std;
int main(){
    int  n;
    cin>>n;
    if(n%3==0 | n%7==0){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
}
