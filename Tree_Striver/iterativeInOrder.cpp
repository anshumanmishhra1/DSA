#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;

    node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void IterativeInOrder(node* root){
    vector<int> ans;
    stack<node*> st;
    node* newNode = root;
    while(true){
        if(newNode!=NULL){
            st.push(newNode);
            newNode= newNode->left;
        }
        else{
            if(st.empty()==true) break;
                newNode = st.top();
                st.pop();
                ans.push_back(newNode->val);
                newNode= newNode->right;
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

   


}



int main(){
    node* a  = new node(1);
    node* b  = new node(2);
    node* c  = new node(3);
    node* d  = new node(4);
    node* e  = new node(5);
    node* f  = new node(6);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;

    IterativeInOrder(a);
    return 0;

}