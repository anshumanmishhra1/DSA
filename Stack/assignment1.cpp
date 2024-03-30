/*📌Remove kth element from top in a given stack 
*/
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    stack<int> s1;
    stack<int> s2;
    int k;
    cin>>k;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    
    k--;
    while(k--){
        s2.push(s1.top());
        s1.pop();
    }
    s1.pop();
    while(s2.size()>0){
        s1.push(s2.top());
        s2.pop();
    }

    while(s1.size()>0){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    
    return 0;

}