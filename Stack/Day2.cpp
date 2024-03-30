/*📌Balanced Brackets 


#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool isBool(string str){
    if(str.length()%2!=0) return false;
    stack<char> st;
    for(int i=0;i<str.length();i++){
        if(str[i] == '(') st.push(str[i]);
        else { //mtlb agar '(' nahi hai to kya kare?
            if(st.size()==0) return true;
            else st.pop();
        }
    }
    if(st.size()==0) return true;
    else return false;
}
int main(){
    string str = "()()()";
    cout<<isBool(str);
    return 0;

}

*/


/*📌Remvoe consecutive Duplicated in a string using stack


#include<iostream>
#include<vector>
#include<stack>
using namespace std;
string removeDuplicate(string s){
    stack<char> st;
    st.push(s[0]); //st = a
    for(int i=1;i<s.length();i++){
        if(s[i]!=st.top()) st.push(s[i]);
    }
    s="";
    while(st.size()>0){
        s+=st.top();
        st.pop();
    }
    return s;
}
int main(){
    string s = "aaabbcddaabffg";
    s = removeDuplicate(s);
    cout<<s;
    return 0;

}

*/


/*📌Next Greater Element using Stack



#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int nge[n];
    stack<int> st;
    nge[n-1] = -1;
    st.push(arr[n-1]);

    for(int i=n-2;i>=0;i--){
        //pop all the elements smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }

        //mark the ans in the nge array
        if(st.size()==0) nge[i] = -1;
        else nge[i] = st.top();

        //push the arr[i];
        st.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    return 0;

}

*/

/*📌Previous Greater Element

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int pge[n];
    stack<int> st;
    pge[0] = -1;
    st.push(arr[n-1]);

    for(int i=1;i<=n-1;i++){
        //pop all the elements smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }

        //mark the ans in the nge array
        if(st.size()==0) pge[i] = -1;
        else pge[i] = st.top();

        //push the arr[i];
        st.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
    return 0;

}

*/


/*📌Stock Span Problem 
*/

