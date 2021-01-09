#include<iostream>
using namespace std;

void clearBit(int &n, int i){
    int mask = ~(1<<i);
    n = n&mask;
}

void updateBit(int &n, int i, int v){
    n = n | (v<<i);
}

int main(){
    int n, i, v;
    cin>>n>>i>>v;
    clearBit(n, i);
    updateBit(n, i, v);
    cout<<n<<endl;
}