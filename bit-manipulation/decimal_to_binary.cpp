#include<iostream>
using namespace std;

void convertToBinary(int n){
    while(n!=0){
        int k = n>>1;
        if(n&1){
            cout<<1;
        }else{
            cout<<0;
        }
        n = n>>1;
    }
}

int main(){

    int x, y;
    cin>>x>>y;
    int ans = x^y;
    convertToBinary(ans);
    return 0;
}