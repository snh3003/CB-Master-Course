#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100];

    for(int c=0;c<n;c++){
        cin>>arr[c];
    }
    //First 2 for loops are for selecting the range of subarrays
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //printing the subarray
            cout<<'[';
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<",";
            }
            cout<<']';
        }
    }
    return 0;
}