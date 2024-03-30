/*
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // st.pop();
    // cout<<st.size();
    // cout<<st.top();

    // 📌Printing the stack
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // } 

    // 📌we will use good method
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }

    // 📌putting back the elements to the original stack
    while(temp.size()>0){
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
    cout<<endl<<st.top();

    return 0;

}

*/

/*📍Question 1 : Reverse a stack  

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void print(stack<int> st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // print(st);
    stack<int> gt;
    stack<int> rt;

    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }

    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }

    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    print(st);
   

    return 0;

}

*/


/*📌Question 2 : Push element at bottom/any index 


#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void print(stack<int> st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
void pushAtBottom(stack<int> &st,int val){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);

    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> helper;
    print(st);

    pushAtBottom(st,80);
    cout<<endl;
    print(st);
    return 0;

}

*/


/*📍Reverse stack recursively 


#include<iostream>
#include<vector>
#include<stack>

using namespace std;

void displayRev(stack<int> &st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    displayRev(st);
    cout<<x<<" ";
    st.push(x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> helper;
    displayRev(st);

    return 0;

}

*/

/*📍Question 3 : Push element at bottom recursively 

#include<iostream>
#include<vector>
#include<stack>

using namespace std;

void displayRev(stack<int> &st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    displayRev(st);
    cout<<x<<" ";
    st.push(x);
}

void pushAtBottomRec(stack<int> &st, int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottomRec(st,val);
    st.push(x);
}

void reverse(stack<int> &st){
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    reverse(st);
    pushAtBottomRec(st,x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> helper;
    // pushAtBottomRec(st,90);
    displayRev(st);

    reverse(st);
    cout<<endl;
    displayRev(st);

    return 0;

}


*/


/*📌Stack implementation using array/vector 

*/

#include<iostream>
#include<vector>
using namespace std;
class stack{
    public:
    int arr[5];
    int idx = -1;
    void push(int val){
        idx++;
        arr[idx] = val;
    }
    void pop(){
        idx--;
    }

    int top(){
        return idx;
    }

    int size(){
        return idx+1;
    }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout<<st.size()<<endl;
    cout<<st.size()<<endl;

    return 0;

}