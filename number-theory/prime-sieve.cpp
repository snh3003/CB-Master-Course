#include<iostream>
using namespace std;

void prime_sieve(int n){
    // cout<<n;
    //initially mark all the nos as not prime
    bool arr[1000000] = {0}; 
    //mark all odd nos as prime
    for(int i=3; i<n; i+=2){
        arr[i] = 1;
    }
    //check for all the odd nos
    for(int j=3;j<n;j+=2){
        if(arr[j]){ // arr[j] is prime
            //mark all its multiples as not prime
            for(int k = j*j; k<n; k+=j){
                arr[k] = 0;
            }
        }
    }
    arr[2] = 1;
    //print nos that are prime
    for(int i=0;i<n;i++){
        if(arr[i]){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    // cout<<n;
    prime_sieve(n);
}