#include<iostream>
#include<vector>
using namespace std;

bool isSorted(int *a, int n){
    // base case
    if(n==0 || n==1){
        return true;
    }

    // recursion case
    
    if(a[0]<a[1] and isSorted(a+1, n-1)){
        return true;
    }
    return false;
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<isSorted(arr, n);
}