#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& arr){
    int min = INT_MAX, Profit = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<min){
            min = arr[i];
        }
        Profit = max(Profit, arr[i]-min);
    }
    return Profit;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int ip;
        cin>>ip;
        arr.push_back(ip);
    }
    cout<<maxProfit(arr);
}