#include<bits/stdc++.h>
using namespace std;

int firstOcc(int* a, int n, int key){
    if(n == 0){
        return -1;
    }
    // rec case
    if(a[0] == key){
        return 0;
    }
    int p = 0;
    int i = firstOcc(a+1, n-1, key);
    if(i == -1){
        return -1;
    }
    return i+1;
}

int linearSearch(int *a, int i, int n, int key){
    // i is the index of current element
    //base case
    if(i == n){
        return -1;
    }
    // rec case
    if(a[i] == key){
        return i;
    }
    return linearSearch(a,i+1, n, key);
}

int main(){
    int ip, n;
    cin>>n;
    int arr[n], i=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    int key;
    cin>>key;
    cout<<firstOcc(arr, n, key)<<endl<<linearSearch(arr, 0, n, key)<<endl;
}