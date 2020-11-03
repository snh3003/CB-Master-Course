#include<iostream>
using namespace std;

class Node{
    public:
        int data; //stores the data
        Node *next; //pointer to the next node
    Node(int d){
        data = d;
        next = NULL;
    }
};

//passing value by reference so that the head is updated at the memory and not the copy

void insertAtHead(Node *&head, int d){

    if(head==NULL){
        head = new Node(d);
        return;
    }
    Node *n = new Node(d);
    n->next = head;
    head = n;
}
//passing by value so that the address of the main head doesnt change only the value of the copy of head changes
void print(Node *head){

    while(head!=NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
}

int main(){
    Node *head = NULL;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);
    print(head);
    cout<<endl;
    return 0;
}