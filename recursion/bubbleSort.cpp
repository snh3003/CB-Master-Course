#include<iostream>
using namespace std;

void bubbleSort(int *a, int j, int n){

    //base case
    if(n==1){
        return;
    }

    if(j == n-1){
        // single pass of the current array has been done
        return bubbleSort(a, 0, n-1);
    }

    //rec case
    if(a[j]>a[j+1]){
        swap(a[j], a[j+1]);
    }
    bubbleSort(a, j+1, n);
    return;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr, 0, n);
    for(int x: arr){
        cout<<x<<" ";
    }
}