#include<bits/stdc++.h>
using namespace std;

// top down
int minCoins(int n, int coins[], int T, int dp[]){

    //base case
    if(n==0){
        return 0;
    }
    //Lookup
    if(dp[n]!=0){
        return dp[n];
    }
    // recursive case
    int ans = INT_MAX;
    for(int i=0;i<T;i++){
        if(n-coins[i]>=0){
            int subProb = minCoins(n-coins[i], coins, T, dp);
            ans = min(ans, subProb+1);
        }
    }
    dp[n] = ans;
    return dp[n];
}

// bottom up

int minCoinsBU(int N, int coins[], int T){

    int dp[100] = {0};

    // iterate over all states 1....N
    for(int n=1;n<=N;n++){
        // init the current ans as INT_MAX
        dp[n] = INT_MAX;
        for(int i=0;i<T;i++){
            if(n-coins[i]>=0){
                int subProb = dp[n-coins[i]];
                dp[n] = min(dp[n], subProb + 1);
            }
        }
    }
    return dp[N];
}

int main(){
    int n=15;
    int coins[] = {1,7,10};
    int dp[100] = {0};
    int T = sizeof(coins)/sizeof(int);

    cout<<minCoins(n, coins, T, dp)<<endl;
    cout<<minCoinsBU(n, coins, T);
}