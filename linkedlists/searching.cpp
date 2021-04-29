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

int lengthList(node *head){
    int count = 0;
    while(head!=NULL){
        count++;
        head = head->next;
    }
    return count;
}

void insertTail(node *&head, int data){
    if(head == NULL){
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

void insertHead(node *&head, int data){
    if(head == NULL){
        head = new node(data);
        return;
    }
    node *n = new node(data);
    n->next = head;
    head = n;
}

void insertMiddle(node *&head, int data, int pos){
    if(head==NULL or pos==0){
        insertHead(head, data);
    }else if(pos > lengthList(head)){
        insertTail(head, data);
    }else{
        int jump = 0;
        node *temp = head;
        while(jump<pos-1){
            temp = temp->next;
            jump++;
        }
        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

void printlist(node *head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head = head->next;
    }
}

void deleteHead(node *&head){
    if(head==NULL){
        return;
    }
    node *temp = head->next;
    delete head;
    head = temp;
}

// linear search
bool search(node *head, int key){
    node *temp = head;
    while(temp!=NULL){
        if(temp->data==key) return true;
        temp = temp->next;
    }
    return false;
}

// linear search recursively
bool recurSearch(node *head, int key){
    if(head==NULL){
        return false;
    }
    if(head->data==key){
        return true;
    }
    else{
        return recurSearch(head->next, key);
    }
}

int main(){
    node *head = NULL;
    insertHead(head, 3);
    insertHead(head, 2);
    insertHead(head, 1);
    insertTail(head, 5);
    insertMiddle(head, 4, 3);
    // deleteHead(head);
    //printlist(head);
    cout<<search(head, 9);
    cout<<recurSearch(head, 6);
}