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

vector<vector<int>> levelOrder(node* root){
    vector<vector<int>>ans;
    queue<node*> q;
    q.push(root);
    if(root==NULL) return ans;

    while(q.size()>0){
        int size = q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            node* p = q.front();
            q.pop();
            if(p->left!=NULL) q.push(p->left);
            if(p->right!=NULL) q.push(p->right);
            level.push_back(p->val);
        }
        ans.push_back(level);
    }
    return ans;
}

void display(node* root,vector<vector<int>>ans){
    int m = ans.size();
    int n = ans[0].size();

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
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
    levelOrder(a);
    return 0;

}