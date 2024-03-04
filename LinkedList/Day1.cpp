/*📌Understanding Nodes and how ther are linked : 


#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    //forming linked list
    a.next=&b;
    b.next=&c;
    c.next=&d;

    // printing D value using a 
    // cout<<(((a.next)->next)->next)->val;

    Node temp = a;

    while(true){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }
    return 0;

}


*/


/*📌NodePointer Class Understanding 



#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    Node* temp = a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    return 0;

}

*/


/*📌Find the length of the the linked list 

#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        temp = temp->next;
        n++;
    }
    return n;
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    display(a);
    cout<< size(a);


    return 0;

}


*/

/*📌Linked list usning recursion

#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        temp = temp->next;
        n++;
    }
    return n;
}

void displayRec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayRec(head->next);
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // display(a);
    displayRec(a);
    // cout<<size(a);
    return 0;

}

*/


/*📌Linked List Class(Insert At End Mehthod)*/

#include<iostream>
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

class LinkedList{ //user defined data structure
    public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        head=tail=NULL;
        size=0;
    }

    void insertAtTail(int val){
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

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next = head;
            head=temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val){
        if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);

        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<idx-1;i++){
                temp = temp->next;
            }
            t->next=temp->next;
            temp->next = t;
            size++;
        }
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        head=head->next;
        size--;
    }

    void deleteAtTail(){
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next=NULL;
        tail = temp;
        size--;
    }

    void deleteAtIndex(int idx){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();

        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
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
    LinkedList ll; //empty
    ll.insertAtTail(10);  //{10->NULL}
    ll.insertAtTail(20);  //{10->20->NULL}
    ll.display();
    ll.insertAtHead(5);
    ll.display();
    return 0;

}