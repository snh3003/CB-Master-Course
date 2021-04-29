#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;

        //constructor
        node(int d){
            data = d;
            next = NULL;
        }
};

// insertion at head
void insertAthead(node *&head, int data){

    if(head==NULL){
        head = new node(data);
        return;
    }

    node *n = new node(data);
    n->next = head;
    head = n;

}

void printList(node *head){

    while(head!=NULL){
        cout<<head->data<<endl;
        head = head->next;
    }
}

int main(){
    node *head = NULL;
    insertAthead(head, 3);
    insertAthead(head, 2);
    insertAthead(head, 1);
    insertAthead(head, 0);

    printList(head);
}