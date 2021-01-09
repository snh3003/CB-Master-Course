#include<iostream>
using namespace std;

void countBits(int n,int &count){
    if(n>0){
        int lastBit = n&1;
        if(lastBit) count++;
        n = n>>1;
        countBits(n, count);
    }
}

int setBits(int n){
    int count = 0;
    while(n>0){
        n = (n&(n-1));
        count++;
    }
    return count;
}

int main(){
    int n, count = 0, lastBit;
    cin>>n;
    countBits(n, count);
    cout<<count<<endl;
    cout<<__builtin_popcount(n)<<endl;
    cout<<setBits(n)<<endl;
}