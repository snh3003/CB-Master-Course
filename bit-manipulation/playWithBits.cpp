#include<iostream>
using namespace std;

// void countBits(int n,int &count){
//     if(n>0){
//         int lastBit = n&1;
//         if(lastBit) count++;
//         n = n>>1;
//         countBits(n, count);
//     }
// }

void setBits(int n, int &count){
    if(n>0){
        n=(n*(n-1));
        count++;
        setBits(n, count);
    }
}

int main(){
    int q;
    cin>>q;
    for(int j=0;j<q;j++){
        int a, b, count = 0;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            setBits(i, count);
        }
        cout<<count<<endl;
    }
}