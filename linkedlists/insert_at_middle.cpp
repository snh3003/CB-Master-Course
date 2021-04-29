#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;

        node(int d){
            data = d;
            next = NULL;
        }
};

int lengthOfList(node *head){
    int count = 0;
    while(head!=NULL){
        count++;
        head = head->next;
    }
    return count;
}

void insertAtHead(node *&head, int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    node *newNode = new node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(node *&head, int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    node *tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}

void insertAtMiddle(node *&head, int data, int position){
    //corner case
    if(head==NULL or position==0){
        insertAtHead(head, data);
        return;
    }
    else if(position>lengthOfList(head)){
        insertAtTail(head, data);
    }else{
        //take p-1 jumps
        node *temp = head;
        int jump = 1;
        while(jump<=position-1){
            temp = temp->next;
            jump++;
        }
        // create a new node
        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

void printList(node *head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head = head->next;
    }
}

int main(){
    node *head = NULL;
    insertAtHead(head, 4);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    //printList(head);
    insertAtMiddle(head, 3,2);
    insertAtTail(head, 5);
    printList(head);
}