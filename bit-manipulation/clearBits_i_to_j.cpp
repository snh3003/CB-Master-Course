#include<iostream>
using namespace std;

void clearBits_i_to_j(int &n, int i, int j){
    int a = (-1<<(j+1)), b = (1<<i)-1;
    int mask = (a|b);
    n = (n&mask);
}

int main(){
    int n, i, j;
    cin>>n>>i>>j;
    clearBits_i_to_j(n, i, j);
    cout<<n<<endl;
}