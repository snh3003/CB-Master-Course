#include<bits/stdc++.h>
using namespace std;

int greatest_number(unsigned long long int start, unsigned long long int end, unsigned long long int n, int k){
    int ans = 0;
    while(start<=end){
            if(k==1){
                ans = end;
                return ans;
            }
            unsigned long long int mid = (start+end)/2;
            if(pow(mid, k)<=n){
                ans = mid;
                start = mid + 1;
            }else{
                end = mid - 1;
            }
    }
    return ans;
}

int main(){
    int t, k;
    unsigned long long int n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        unsigned long long int start = 0;
        unsigned long long int end = n;
        cout<<greatest_number(start, end, n, k)<<endl;
    }
    return 0;
}