#include<iostream>
using namespace std;

bool checkN(int n){
    return (n&1);
}

int main(){
    int n;
    cin>>n;
    bool isPossible = checkN(n);
    if(isPossible){
        cout<<"Odd"<<endl;
    }else{
        cout<<"Even"<<endl;
    }
}