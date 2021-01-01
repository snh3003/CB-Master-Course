#include<iostream>
#include<algorithm>
using namespace std;

bool comparator(int a, int b){
    return a>b;
}

int main(){
    int arr[1000], n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // sort(start, end)
    sort(arr, arr+n, comparator); // comparator function is called internally
    for(int j=0;j<n;j++){
        cout<<arr[j]<<", ";
    }
    cout<<endl; 
    return 0;
}