#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ip, ans = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ip;
        ans = ans ^ ip;
    }
    cout<<ans<<endl;
}