#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &v, int n){
    // run a loop from 0 to n-1 as the last element always gets sorted
    for(int i=0; i<(n-1); i++){
        // loop runs from 0 to (n-i-1) to check the unsorted part
        for(int j=0; j<(n-i-1); j++){
            if(v[j] > v[j+1]){
                // pairwise swap
                swap(v[j], v[j+1]);
            }
        }
    }
}

int main(){
    int n, ip;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>ip;
        v.push_back(ip);
    }
    bubble_sort(v, n);
    for(auto x: v){
        cout<<x<<" ";
    }
}