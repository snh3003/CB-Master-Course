#include<iostream>
using namespace std;

long long int fib(long long int n){
    return n < 2 ? n : fib(n - 1) + fib(n - 2);
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}