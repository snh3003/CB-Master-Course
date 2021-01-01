#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

void print(Node *head){

    while(head!=NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
}

int lengthOfList(Node *head){

    int count = 0;
    while(head!=NULL){
        count++;
    }
    return count;
}

void insertAtTail(Node *&head, int data){

    if(head==NULL){
        head = new Node(data);
        return;
    }
    Node *tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = new Node(data);
    return;
}

void insertAtHead(Node *&head, int data){

    if(head==NULL){
        head = new Node(data);
        return;
    }
    Node *n = new Node(data);
    n->next = head;
    head = n;
}

void insertAtMiddle(Node *&head, int data, int p){

    if(head==NULL){
        insertAtHead(head,data);
    }else if(p>lengthOfList(head)){
        insertAtTail(head,data);
    }else{
        int jump = 1;
        Node *temp = head; 
        while(jump<=p-1){
            temp = temp->next;
            jump++;
        }
        //create a new node
        Node *n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }

}

int main(){
    Node *head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,4);
    print(head);
    insertAtMiddle(head,3,3);
    print(head);
    insertAtTail(head,5);
    print(head);
    cout<<endl;
    return 0;
}

