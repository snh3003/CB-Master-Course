#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next = NULL;
        node(int d){
            data = d;
            next = NULL;
        }
};

void insert(node *&head, int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    node *n = new node(data);
    n->next = head;
    head = n;
}

void print(node *head){
    node *temp = head;
    while(temp!=NULL){
        temp = temp->next;
        cout<<temp->data<<"->";
    }
    return;
}

int main(){

}