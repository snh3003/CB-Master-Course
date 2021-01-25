#include<iostream>
using namespace std;

void incre(int n){
    if(n==0) {
        return;
    } 
    incre(n-1);
    cout<<n<<" ";
}

void decre(int n){
    if(n==0) {
        return;
    }
    cout<<n<<" ";
    decre(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<"Increasing order: "<<endl;
    incre(n);
    cout<<endl<<"Dereasing order: "<<endl;
    decre(n);
}