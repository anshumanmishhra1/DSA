/*📌Write a functio to calculate the nth fibonacci number
using recurssion



#include<iostream>
#include<vector>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}


*/


/*📌Power Function(Algorithm)



#include<iostream>
#include<vector>
using namespace std;
int power(int a, int b){
    if(b==1) return a;
    int ans;
    if(b%2==0){
        ans = power(a,b/2)*power(a,b/2);
    }
    else{
        ans =power(a,b/2)*power(a,b/2)*a;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;

}


*/


/*📌Stair Path 

#include<iostream>
#include<vector>
using namespace std;
int Stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 3;

    return Stair(n-1)+Stair(n-2)+Stair(n-3);
}
int main(){ 
    int n;
    cin>>n;
    cout<<Stair(n);

    return 0;

}

*/


/*📌Maze Path

#include<iostream>
#include<vector>
using namespace std;
int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    return rightWays+downWays;
}

void printPath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+'R');
    printPath(sr+1,sc,er,ec,s+'D'); 
}
int main(){
    int m,n;
    cin>>m>>n;
    printPath(1,1,m,n,"");
    return 0;

}
 */