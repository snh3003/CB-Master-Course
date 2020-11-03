#include<iostream>
using namespace std;

int main(){
    
    // static allocation
    int arr[100];
    cout<<sizeof(arr)<<endl;

    //dynamic allocation
    int n;
    cin>>n;
    int * a = new int[n]{1};
    cout<<sizeof(a)<<endl;
    cout<<a[0]<<endl;
    delete []a;
    return 0;

}