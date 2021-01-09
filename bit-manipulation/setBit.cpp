#include<iostream>
using namespace std;

int setBit(int n, int i){
    return ( n | ( 1 << i));
}

int main(){
    int n, i;
    cin>>n>>i;
    cout<<setBit(n, i)<<endl;
}