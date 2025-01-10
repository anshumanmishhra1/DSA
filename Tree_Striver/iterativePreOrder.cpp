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

void IterativePreOrder(node* root){
    if(root == NULL) return;
    vector<int> ans;
    stack<node*> s;
    s.push(root);

    while(s.size()>0){
        node* p = s.top();
        s.pop();
        ans.push_back(p->val);
        if(p->right!=NULL) s.push(p->right);
        if(p->left!=NULL) s.push(p->left);
        cout<<p->val<<" ";
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

    IterativePreOrder(a);
    return 0;

}