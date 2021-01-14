#include<iostream>
#define ll long long
#define Max_size 1000000
using namespace std;

void prime_sieve(bool *arr){
     
    //mark all odd nos as prime
    for(ll i=3; i<Max_size; i+=2){
        arr[i] = 1;
    }
    //check for all the odd nos
    for(ll j=3; j<Max_size; j+=2){
        if(arr[j]){ // arr[j] is prime
            //mark all its multiples as not prime
            for(ll k = j*j; k<Max_size; k+=j){
                arr[k] = 0;
            }
        }
    }
    arr[2] = 1;
}

int main(){
    int q;
	cin>>q;
	//initially mark all the nos as not prime
    bool arr[Max_size] = {0};
    prime_sieve(arr);
	int csum[1000000] = {0};
	//precomputation of the cumulative sum
	for(ll i=0; i<1000000; i++){
		csum[i] = csum[i-1] + arr[i];
	}
	
	while(q--){
		int a, b;
		cin>>a>>b;
		cout<<csum[b] - csum[a-1]<<endl;
	}
}