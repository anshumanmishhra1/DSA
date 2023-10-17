//Question 1: Find power of two number using function

// #include<iostream>
// using namespace std;
// int power(int a, int b){
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }
// int main(){
//     int a,b;
//     cin >>a >>b;
//     int answer=power(a,b);
//     cout<<"The Power is "<<answer<<endl;

// }



//Question 2: Check whether the number is odd or even

// #include<iostream>
// using namespace std;
// bool isEven(int a){
//     if(a&1){
//         return 0; // even 
//     }
//     else{
//         return 1; // odd
//     }
// }
// int main(){
//     int a;
//     cin>>a;

//     if(isEven(a)){
//         cout<<"The number is even";
//     }
//     else{
//         cout<<"The number is odd";
//     }

// }



// Question 3: Create a program to find nCr:

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }

// int nCr(int n, int r){
//     int num=factorial(n);
//     int denom=factorial(r)*factorial(n-r);
//     int result = num/denom;
//     return result;
// }


// int main(){
//     int x,y;
//     cout<<"Enter the value of n"<<endl;;
//     cin>>x;
    
//     cout<<"Enter the value of r"<<endl;
//     cin>>y;

//     int ans=nCr(x,y);

//     cout<<"Answer of given value is "<<ans<<endl;


// }



// Question 4: Write a program to find counting:

#include<iostream>
using namespace std;
int count(int n){
    for(int i=1;i<=n;i++){
    }
    
}
int main(){
    int x;
    cout<<"Enter the last Value "<<endl;
    cin>>x;
    int ans=count(x);
    cout<<ans<<endl;

}