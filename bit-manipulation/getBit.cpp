#include<iostream>
using namespace std;

bool getBit(int n, int i){
    int mask = (1<<i);
    int bit = (n&i) > 0 ? 1 : 0;
    return bit;
}

int main(){
    int n, i;
    cin>>n>>i;
    bool isPosssible = getBit(n, i);
    if(isPosssible){
        cout<<i<<" - Bit was "<<1<<endl;
    }else{
        cout<<i<<" - Bit was"<<1<<endl;
    }
    return 0;
}