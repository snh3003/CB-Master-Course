#include<iostream>
using namespace std;

void allOcc(int* a, int i, int n, int key){
    //base case
    if(i==n){
        return;
    }
    // recursion case
    if(a[i]==key){
        cout<<i<<" ";
    }
    allOcc(a, i+1, n, key);
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
    allOcc(arr, 0, n, key);
}