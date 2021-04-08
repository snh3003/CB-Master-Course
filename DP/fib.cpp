#include<iostream>
#include<vector>
using namespace std;

// top down approach
int fib(int n, vector<int> dp){
    int ans;
    //base case
    if(n==0 or n==1){
        return n;
    }

    // recursive -- lookup
    if(dp[n]!=0){
        return dp[n];
    }

    // recursive case
    ans = fib(n-1, dp) + fib(n-2, dp);
    return dp[n] = ans;
}

// bottom up approach
int fibBU(int n){
    vector<int> v(100,0);
    v[1] = 1;
    for(int i=2;i<=n;i++){
        v[i] = v[i-1] + v[i-2];
    }
    return v[n];
}

int main(){
    int n;
    cin>>n;
    // int a[n];
    // vector<int> a;
    vector<int> dp(100, 0);
    
    cout<<fib(n, dp)<<endl;

    cout<<fibBU(n);
}