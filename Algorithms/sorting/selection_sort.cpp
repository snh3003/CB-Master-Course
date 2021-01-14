#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &v, int n){
    // run a loop from 0 to n-1 as the last element always gets sorted
    for(int i=0; i<n-1; i++){
        // take first index as min
        int minIndex = i;
        // check for the right element to be placed at the selected index
        for(int j=i+1; j<n; j++){
            if(v[j] < v[minIndex]){
                minIndex = j;
            }
        }
        // swap the minIndex with the current index
        swap(v[minIndex], v[i]);
    }
}

int main(){
    int n, ip;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>ip;
        v.push_back(ip);
    }
    selection_sort(v, n);
    for(auto x: v){
        cout<<x<<" ";
    }
}