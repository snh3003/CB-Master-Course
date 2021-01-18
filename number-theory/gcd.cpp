#include<iostream>
using namespace std;

int gcd(int a, int b){
    int small = min(a, b), ans=1;
    // gcd of 2 nos will always be <= the smallest among 2
    for(int i=1;i<=small; i++){ 
        if(a%i==0 && b%i==0){
            ans = i;
        }
    }
    return ans;
}

int main(){
    int a, b, ans;
    cin>>a>>b;
    cout<<gcd(a, b)<<endl;
}