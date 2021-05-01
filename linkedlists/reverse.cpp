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
    if(head==NULL){
        head = new node(data);
    }
    node *n = new node(data);
    n->next = head;
    head = n;
}

void insertTail(node *head, int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new node(data);
    return;
}

node *reverse(node *head){
    if(head->next==NULL or head==NULL){
        return head;
    }
    // recur case
    node *n = reverse(head->next);
    node *temp = head->next;
    temp->next = head;
    head->next=NULL;
    return n;
}

void printList(node *head){
    //cout<<head->data<<endl;
    while(head!=NULL){
        head = head->next;
        cout<<head->data<<endl;
    }
}

int main(){
    node *head = NULL;
    insertHead(head, 10);
    insertHead(head, 11);
    // printList(head);
    node *shead = reverse(head);
    printList(shead);
}