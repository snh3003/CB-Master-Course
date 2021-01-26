#include<iostream>
using namespace std;

int main(){
    int n, Key;
    cin>>n;
    cin>>Key;
    int arr[100];
    for(int c=0;c<n;c++){
        cin>>arr[c];
    }
    int i=0, j=(n-1);
    while(i<j){
        int Sum = arr[i] + arr[j];
        
        if(Key>Sum){
            i++;
        }
        else if(Key<Sum){
            j--;
        }
        else if(Key==Sum){
            cout<<"Sum found for "<<arr[i]<<" and "<<arr[j];
            i++;
            j--;
        }
    }
    return 0;
}