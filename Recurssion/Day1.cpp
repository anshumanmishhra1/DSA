/*📌Make a function which calculated the factorial of n using 
recurssion


#include<iostream>
#include<vector>
using namespace std;
int fact(int n){
    if(n==1 || n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;

}

*/


/*📌Print 1 to n


#include<iostream>
#include<vector>
using namespace std;
void print(int n){
    if(n==0) return;
    cout<<n<<endl;
    print(n-1);
}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;

}

*/


/*📌Print 1 to n (using extra parameter)



#include<iostream>
#include<vector>
using namespace std;
void print(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    print(i+1,n);
}
int main(){
    int n;
    cin>>n;
    print(1,n);
    return 0;

} 

*/


/*📌Print sum from 1 to n


#include<iostream>
#include<vector>
using namespace std;
void sum(int i,int n){
    if(n==0) {
        cout<<i<<endl;
        return;
    }
    sum(i+n,n-1);

    
}
int main(){
    int n;
    cin>>n;
    sum(0,n);
    return 0;

}


*/


/*📌Make a function which caculated 'a' raised to the power b
using recursion

*/

#include<iostream>
#include<vector>
using namespace std;
int power(int a, int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;

}