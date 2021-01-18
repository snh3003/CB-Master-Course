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
    arr[2] = 1;
    
    // for(int i=0;i<20;i++){
    //     if(arr[i]){
    //         cout<<i<<" ";
    //     }
        
    // }
    vector<int> primes;
    // initialize 2 as 1, 1 and 0 as 0
    primes.push_back(2);
    // append all the true values into vector array
    
    for(ll i=3;i<Max_size;i++){
        if(arr[i] == 1){
            // cout<<".";
            primes.push_back(i);
        }
    }
    return primes;
}

int count_divisors(int n, vector<int> &primes){
    int ans = 1;
    int i = 0;
    int p = primes[0];
    //if n is not prime then it must have one factor that must be equal to sqrt(p)
    while(p*p<=n){ 
        if(n%p==0){
            int count = 0;
            while(n%p==0){
                n = n/p;
                count++;
            }
            ans = ans*(count+1);
        }
        // go to the next position
        i++;
        p = primes[i];
    }
    if(n!=1){
        ans = ans*2;
    }
    return ans;
}

int main(){
    vector<int> v = prime_sieve();
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int ip;
        cin>>ip;
        int divisors = count_divisors(ip, v);
        cout<<divisors<<endl;    
    }
    
    
}