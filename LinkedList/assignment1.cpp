/*📌The user degined LL should have insert(head,tail,idx) delete(
    head,tail,idx), get() and display function 


#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
class node{
    public:
    int val;
    node* next;

    node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
    public:
    node* head;
    node* tail;
    int size;

    LinkedList(){
        head=tail=NULL;
    }
    void display(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }

    void insertAtFirst(int val){
        node* temp = new node(val);
        if(head==NULL) head = temp;
        if(tail==NULL) tail = head;
        else{
            temp->next = head;
            head = temp;
        }
    }

    void addLast(int val){
        node* temp = new node(val);
        if(tail==NULL) tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }

        if(head==NULL) head = tail;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtFirst(1);
    ll.insertAtFirst(2);
    ll.insertAtFirst(3);
    ll.insertAtFirst(4);
    ll.addLast(5);
    ll.display();
    return 0;

}

*/


/*📌Delete the middle of the linked List (LeetCode-2095)

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return nullptr;
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = NULL;

        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if(prev!=NULL){
            prev->next = slow->next;
        }
        else{
            head = head->next;
        }

        return head;
    }
};

*/


/*📌Find the length of loop in cycle of Linked List 

*/