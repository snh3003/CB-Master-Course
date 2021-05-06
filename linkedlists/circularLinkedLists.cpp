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

void insertHead(node *&head, int data){
    
    node*n = new node(data);
    node*temp = head;

    n->next = head;

    if(temp!=NULL){
        while(temp->next!=head){
            temp = temp->next;
        }
        temp->next = n;
    }else{
        n->next = n;
    }
    head = n;
}

void printList(node *head){
    node *temp = head;
    while(temp->next!=head){
        temp = temp->next;
        cout<<temp->data<<" -> ";
    }
    return;
}

int main(){
    node *head = NULL;
    insertHead(head,10);
    insertHead(head,20);
    insertHead(head,30);
    insertHead(head,40);
    insertHead(head,50);

    printList(head);
}