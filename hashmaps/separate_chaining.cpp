#include<iostream>
#include<cstring>
using namespace std;

template<typename T>
class Node{
    public:
        string key;
        T value;
        Node<T> *next;
        // constructor
        Node(string key, T val){
            this->key = key;
            value = val;
            next = NULL;

        }
        // destructor
        ~Node(){
            if(next!=NULL){
                delete next;
            }
        }
};

// hash table class
template<typename T>
class Hashtable{
    Node<T>** table; //pointer or array
    int current_size, table_size;

    int hashFn(string key){
        int idx = 0;
        int p = 1;
        for(int j=0;j<key.length();j++){
            idx = idx + ( key[j] * p ) % table_size;
            idx = idx % table_size;
            p = (p*27)%table_size;
        }
        return idx;
    }
    // rehashfn
    void rehash(){
        Node<T>** oldTable = table;
        int oldTableSize = table_size;
        table_size = 2*table_size;
        table = new Node<T>*[table_size];

        for(int i=0;i<table_size;i++){
            table[i] = NULL;
        }

        current_size = 0;

        // shift the elements from old table to new table
        for(int i=0;i<oldTableSize;i++){
            Node<T>*temp = oldTable[i];
            while(temp!=NULL){
                insert(temp->key, temp->value);
                temp = temp->next;
            }
            if(oldTable[i]!=NULL){
                delete oldTable[i];
            }
        }
        delete [] oldTable;
    }

    public: 
        Hashtable(int ts = 7){
            table_size = ts;
            table = new Node<T>*[table_size];
            for(int i=0;i<table_size;i++){
                table[i] = NULL;
            }
        }
    void insert(string key, T value){
        //....
        int idx = hashFn(key);

        // create a ll
        Node<T> *n = new Node<T>(key, value);
        // Insert at head of ll with id = idx
        n->next = table[idx];
        table[idx] = n;
        current_size++;

        // rehash..

        float lf = current_size/(1.0*table_size);
        if(lf>0){
            rehash();
        }
    }

    void print(){
        for(int i=0;i<table_size;i++){
            cout<<"Bucket: "<<i<<" ->";
            Node<T>*temp = table[i];
            while(temp!=NULL){
                cout<<temp->key<<" ->";
                temp = temp->next;
            }
            cout<<endl;
        }
    }

    T* search(string key){
        //..
        int idx = hashFn(key);
        Node<T>*temp = table[idx];
        while(temp!=NULL){
            if(temp->key==key){
                return &temp->value;
            }
            temp = temp->next;
        }
        return NULL; // T*
    }

    // void erase(string key){

    // }
};

int main(){

    Hashtable<int> price_menu;

    price_menu.insert("Burger", 120);
    price_menu.insert("BurgerPizza", 150);
    price_menu.insert("Pepsi", 20);
    price_menu.insert("Noodles", 25);
    price_menu.insert("Coke", 40);

    price_menu.print();

    auto price = price_menu.search("Noodles");
    if(*price==NULL){
        cout<<"Not found!";
    }else{
        cout<<"Price is "<<*price<<endl;
    }

    return 0;
}