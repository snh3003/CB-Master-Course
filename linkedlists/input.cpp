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

void insertHead(Node *&head, int data){
    if(head == NULL){
        head = new Node(data);
    }
    Node *n = new Node(data);
    n->next = head;
    head = n;
}

Node* take_ip(){
    int d;
    cin>>d;
    Node *head = NULL;
    while(d!=-1){
        insertHead(head, d);
        cin>>d;
    }
    return head;
}

void printList(Node *head){
    if(head==NULL){
        return;
    }
    while(head!=NULL){
        cout<<head->data<<endl;
        head = head->next;
    }
}

int main(){
    Node *head = take_ip();
    printList(head);
}