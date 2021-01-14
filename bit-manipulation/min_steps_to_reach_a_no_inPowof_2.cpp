#include<iostream>
using namespace std;

int setBits(int n){
    int count = 0;
    while(n>0){
        count += (n&1);
        n = n>>1;
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cout<<setBits(n)<<endl;
    }
}