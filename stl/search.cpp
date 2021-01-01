#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1, 3, 5, 11, 14};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    auto it = find(arr, arr+n, key); // find(array, len of array, element you want to search)
    if(it-arr==n){
        cout<<key<<" not present"<<endl;
    }else{
        cout<<*it<<" found at "<<it-arr<<endl;
    }
    
    return 0;
}