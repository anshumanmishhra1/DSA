/* Print decreasing and increasing of n*/

// #include<iostream>
// using namespace std;
// int IncDec(int n){
//     if(n==0){
//         return 1;
//     }
//     cout<<n<<endl;
//     IncDec(n-1);
//     cout<<n<<endl;

// }
// int main(){
//     int n;
//     cout<<"enter the value of n: "<<endl;
//     cin>>n;
//     IncDec(n);

//     return 0;

// }


/* Print Power of a^b */

// #include<iostream>
// using namespace std;
// int power(int a, int b){
//     if(b==0){
//         return 1;
//     }
//     return a* power(a,b-1);
// }
// int main(){
//     int a,b;
//     cout<<"Enter the value of A: "<<endl;
//     cin>>a;
//     cout<<"Enter the value of B: "<<endl;
//     cin>>b;
//     int ans=power(a,b);
//     cout<<"Power of : " <<a<< " to the power of : "<<b<< " is : "<<ans;
//     return 0;

// }



/* Write a function to calculate the nth fibonaaci number using Recurssion: */

// #include<iostream>
// using namespace std;
// int fibo(int n){
//     if(n==1 || n==2){
//         return 1;
//     }
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     int n;
//     cout<<"Enter the number: "<<endl;
//     cin>>n;
//     cout<<fibo(n);
//     return 0;

// }




