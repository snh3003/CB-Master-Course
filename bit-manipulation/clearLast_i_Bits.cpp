#include<iostream>
using namespace std;

void clearLast_i_Bits(int &n, int i){
    int mask = (~0<<i); // same as (-1<<i)
    n = (n&mask);
}

int main(){
    int n, i;
    cin>>n>>i;
    clearLast_i_Bits(n, i);
    cout<<n<<endl;
}