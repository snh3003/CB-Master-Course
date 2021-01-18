#include<iostream>
#define ll long long
#define Max_size 1000000
using namespace std;

void prime_sieve(int n){
    // cout<<n;
    //initially mark all the nos as not prime
    bool arr[1000000] = {0}; 
    //mark all odd nos as prime
    for(ll i=3; i<Max_size; i+=2){
        arr[i] = 1;
    }
    //check for all the odd nos
    for(ll j=3;j<Max_size;j+=2){
        if(arr[j]){ // arr[j] is prime
            //mark all its multiples as not prime
            for(ll k = j*j; k<Max_size; k+=j){
                arr[k] = 0;
            }
        }
    }
    arr[2] = 1;
    //print nos that are prime
    for(ll i=0;i<n;i++){
        if(arr[i]){
            cout<<i<<" ";
        }
    }
}

int main(){
    ll n;
    cin>>n;
    // cout<<n;
    prime_sieve(n);
}