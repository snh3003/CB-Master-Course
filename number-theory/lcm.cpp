#include<iostream>
using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a%b);
}

int lcm(int a, int b){
    int hcf = gcd(a, b);
    int l_c_m = (a*b)/hcf;
    return l_c_m;
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<lcm(a, b)<<endl;
}