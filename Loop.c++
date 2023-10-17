// 1. WHILE LOOPS

//Print number from 1 to n

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         cout<<i<<" ";
//         i++;
//     }
// }


//Print Sum from 1 to n

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1,sum=0;
//     while(i<=n){
//         sum=sum+i;
//         i++;
//     }
//     cout<<sum;

// }


/*
Make a code for this pattern

****
****
****
****
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


/*
Make code for this 

1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

// }

/*
Make code for this
3 2 1
3 2 1
3 2 1

*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
    
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<n-j+1<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }



/*
1 2 3
4 5 6
7 8 9
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;

//     }
// }



/*
*
**
***
****
*****
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"*"<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }




/*
1
2 2
3 3 3
4 4 4 4
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<count<<" ";
//             j++;
//         }
//         cout<<endl;
//         count++;
//         i++;

//     }
// }




/*
1
2 3
4 5 6
7 8 9 10
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<count<<" ";
//             count++;
//             j++;

//         }
//         cout<<endl;
//         i++;
//     }
// }



/*
1
2 1
3 2 1
4 3 2 1
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i-j+1<<" ";
//             j++;

//         }
//         cout<<endl;
//         i++;
//     }
// }



/*
A A A
B B B
C C C
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         char ch='A'+i-1;
//         while(j<=n){
//             cout<<ch;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }



//FOR LOOPS:


/*
Printing numbers from 1 to n
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<i<<endl;
//     }
// }


// Understanding Break 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;

//     cout<<"Printing numbers from 1 to n "<<endl;
//     int i=1;
//     for(; ;){
//         if(i<=n){
//             cout<<i<<endl;
//         }
//         else{
//            break; 
//         }
//         i++;
//     }

// } 


/*Printing sum of numbers from 1 to N */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<sum;
// }


/*Fibonacci Series*/


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=0;
//     int b=1;
//     cout<< a << " "<< b<<" ";
//     for(int i=1;i<=n;i++){
//         int nextNumber=a+b;
//         cout<<nextNumber<<" ";
//         a=b;
//         b=nextNumber;
//     }
// }


/* Check for Prime */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a Number for check"<<endl;
//     cin>>n;
//     bool isPrime=1;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             isPrime=0;
//             break;
//         }
//     }
//     if(isPrime==0){
//         cout<<"Not a prime"<<endl;
//     }
//     else{
//         cout<<"It is a prime"<<endl;
//     }
// }

// Question 1:
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<=5;i++){
//         cout<<i<<" ";
//         i++;
//     }
// }

// answer will be 0 2 4

// Question 2:
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<=5;i--)   {
//         cout<<i<<" ";
//         i++;
//     }
// }

// answer will be infinite loop of Zero


// Question 3:

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<=15;i+=2)   {
//         cout<<i<<" ";
//         if(i&1){
//             continue;
//         }
//         i++;
//     }
// }

// answer will 0 3 5 7 9 11 13 15