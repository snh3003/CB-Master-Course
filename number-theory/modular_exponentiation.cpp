#include<iostream>
using namespace std;

int fast_exponentiation(int a, int b){
    int ans = 1;
    while(b>0){
        int lastBit = a&1;
        if(lastBit){
            ans = ans*a;
        }
        a = a*a;
        b = b>>1;
    }
    return ans;
}

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int ans = (fast_exponentiation(a%c, b))%c;
    cout<<ans<<endl;
}