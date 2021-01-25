#include<bits/stdc++.h>
using namespace std;

int lastOcc(int *a, int n, int key){

    //base case
    if(n == 0){
        return -1;
    }
    //rec case
    int i = lastOcc(a+1, n-1, key);
    if(i == -1){
        if(a[0] == key){
            return 0;
        }else {
            return -1;
        }
    }
    // if i returned by subproblem is not -1
    return i+1;
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
    cout<<lastOcc(arr, n-1, key)<<endl;
}