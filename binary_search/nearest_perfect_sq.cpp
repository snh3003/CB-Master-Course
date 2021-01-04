#include<bits/stdc++.h>
using namespace std;

int find_sq(int n){
    int start = 2, end = n, ans, final;
    while(start<=end){
        int mid = (start+end)/2;
        if(mid*mid>n){
            end = mid - 1;
        }else if(mid*mid==n){
            return mid*mid;
        }else{
            ans = mid;
            while(ans*ans<n){
                ans++;
            }
            if(ans*ans==n){
                return ans*ans;
            }
            return (ans-1)*(ans-1);
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the number you want the nearest perfect sq: ";
    cin>>n;
    cout<<find_sq(n);
}