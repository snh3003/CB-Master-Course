#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &v, int n){
    // loop runs from 1 to n-1
    for(int i=1; i<n; i++){
        // take i as current element
        int CurrentElement = v[i];
        // run the while loop on unsorted part
        int j = i-1;
        while(j>=0 && v[j]>CurrentElement){
            // move the bigger element one index ahead
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = CurrentElement;
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
    insertion_sort(v, n);
    for(auto x: v){
        cout<<x<<" ";
    }
}