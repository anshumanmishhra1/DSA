/*📌Basics
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int> &q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int>q;
    //front means pop
    //rear means push

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // cout<<q.back()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;
    // cout<<q.size()<<endl;

    //Displaying the queue
    display(q);

    return 0;

}
*/

/*📌Reverse the string using the Stack 

#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

void display(queue<int> &q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void reverse(queue<int>&q){
    stack<int> s;
    //empty the  queue to the stack
    while(q.size()>0){
        int x = q.front();
        q.pop();
        s.push(x);
    }

    //empty the stack into the queue
    while(s.size()>0){
        int x = s.top();
        s.pop();
        q.push(x);
    }

}


int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverse(q);
    display(q);
    return 0;

}

*/


/*📌Remove all elements present at the even position in a queue .
Consider 0 based indexing

#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int> &q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void removeAtEven(queue<int> &q){
    int n = q.size();

    for(int i=0;i<n;i++){
        if(i%2==0){
            q.pop();
        }
        else{
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    removeAtEven(q);
    display(q);
    return 0;

}

*/


/*📍Array implementation of Queue using OOPs concept

#include<iostream>
using namespace std;
class Queue{
    public:
    int f;
    int b;
    int arr[5];

    Queue(){
        f = 0;
        b = 0;
    }

    void push(int val){
        if(b==5){
            cout<<"Queue is full"<<endl;
        }
        arr[b] = val;
        b++;
    }

    void pop(){
        if(f-b==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        f++;
    }

    int front(){
        if(f-b == 0){
            cout<<"Queue is empty";
            return -1;
        }
        return arr[f];
    }

    int back(){
        if(f-b == 0){
            cout<<"Queue is empty";
            return -1;
        }
        return arr[b-1];
    }

    void display(){
        for(int i= f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.pop();
    q.display();
    return 0;

}

*/

/*📍LinkedList Implementation of Queue using OOPs concept
// for linked list push is nothing but insertAtEnd 

#include<iostream>
#include<vector>
using namespace std;
class Node{ //user defined data types
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next= NULL;
    }
};

class Queue{ //user defined data structure
    public:
    Node* head;
    Node* tail;
    int size;

    Queue(){
        head=tail=NULL;
        size=0;
    }

    void push(int val){
        Node* temp = new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next = temp;
            tail=temp;
        }
        size++;
    }


    void pop(){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        head=head->next;
        size--;
    }



    int front(){
        return head->val;
    }

    int back(){
        return tail->val;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.pop();
    q.display();
    return 0;
    return 0;

}

*/