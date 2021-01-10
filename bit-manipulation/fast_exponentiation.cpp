#include<iostream>
using namespace std;

int fast_exponentiation(int n, int pow){
    int ans = 1;
    while(pow>0){
        int lastBit = (pow&1); // extract the last bit
        if(lastBit){ // if last bit is 1
            ans = ans * n; // multiple with n
        }
        n = n * n; // increase the power of n or square 
        pow = pow>>1; // left shift power or discard the last bit
    }
    return ans;
}

int main(){
    int n, pow;
    cin>>n>>pow;
    cout<<fast_exponentiation(n, pow)<<endl;
}