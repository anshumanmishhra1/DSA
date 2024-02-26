/*📌Print increasing Decreasing Sequence :

#include<iostream>
#include<vector>
using namespace std;
void print(int n,int i){
    if(i>n) {
        return;
    }
    cout<<i<<endl;
    print(n,i+1);
    if(i>1)cout<<i-1<<endl;

}
int main(){
    int n;
    cin>>n;
    print(n,1);
    return 0;

}

*/


/*📌Write a program to calculate the sum of odd numbers between a and b
(both inclusive ) using recursion 

*/

#include<iostream>
#include<vector>
using namespace std;
void print(int a, int b,int &sum){
    //base case
    if(a>b) return;
    if(a==b){
        if(a%2!=0){
            sum +=a;
        }
        return;
    }
    //odd
    if(a%2!=0){
        sum +=a;
        print(a+2,b,sum);
    }
    else{
        print(a+1,b,sum);
    }
    
}
int main(){
    int a,b;
    cin>>a>>b;
    int sum =0;
    cout<<sum;
    return 0;

}