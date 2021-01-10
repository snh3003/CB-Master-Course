#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ip, result = 0, ans = 0, pos = 0;
    cin>>n;
    vector<int> v;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>ip;
        v.push_back(ip);
        result = result ^ ip;
    }
    int temp = result, k = 1;
    while((temp&k)==0){
        k = k<<1;

    }
    int mask = k;
    for(int j=0;j<n;j++){
        if((v[j]&mask)){
            ans = ans^v[j];
        }
    }
    int r1 = ans^result;
    if(ans>r1){
        cout<<r1<<" "<<ans<<endl;
    }else{
        cout<<ans<<" "<<r1<<endl;
    }
}