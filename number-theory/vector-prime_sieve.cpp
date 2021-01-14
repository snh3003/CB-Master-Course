#include<bits/stdc++.h>
#define ll long long
#define Max_size 1000000
using namespace std;

vector<int> prime_sieve(){
    bool arr[Max_size] = {0};
    //mark all the odd nos as prime
    for(ll i=3; i<Max_size; i+=2){
        arr[i] = 1;
    }
    // check for multiples of odd nos
    for(ll j=3; j<Max_size; j+=2){
        if(arr[j]){
            // make multiples of j as not prime
            for(ll k = j*j; k<Max_size; k+=j){
                arr[k] = 0;
            }
        }
    }
    cout<<"primes:";
    for(int i=0;i<20;i++){
        if(arr[i]){
            cout<<i<<" ";
        }
        
    }
    cout<<endl;
    vector<int> primes;
    // initialize 2 as 1, 1 and 0 as 0
    primes[0] = primes[1] = 0;
    primes[2] = 2;

    // append all the true values into vector array

    for(ll i=3;i<Max_size;i++){
        if(arr[i]){
            // cout<<".";
            primes.push_back(i);
        }
    }
    
    return primes;
}

int main(){
    int n;
    cin>>n;
    vector<int> v = prime_sieve();
    for(int i=0; i<n; i++){
        if(v[i]){
            cout<<v[i]<<" ";
        }
    }
}