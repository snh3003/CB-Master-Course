#include<iostream>
using namespace std;

void clearBits_i_to_j(int &n, int i, int j){
    int a = (-1<<(j+1)), b = (1<<i)-1;
    int mask = (a|b);
    n = (n&mask);
}

void replace(int &n, int m, int i){
    int mask = (m<<i);
    n = (n|mask);
}

int main(){
    int n, m, i, j;
    cin>>n>>m>>i>>j;
    clearBits_i_to_j(n,i,j);
    replace(n,m,i);
    cout<<n<<endl;
    return 0;
}