#include<bits/stdc++.h>
using namespace std;

void filterChar(int n, char a[]){
    int j = 0;
    while(n>0){
        int lastBit = (n&1);
        if(lastBit){
            cout<<a[j];
        }
        j++;
        n = n>>1;
    }
    cout<<endl;
}

void passIndex(char a[]){
    int len = strlen(a);
    for(int i=0; i<(1<<len); i++){
        filterChar(i, a);
    }
}

int main(){
    char a[100];
    cin>>a;
    passIndex(a);
}