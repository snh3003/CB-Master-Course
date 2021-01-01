#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 3, 3, 35, 40, 90, 91, 100};
    int len = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    bool present = binary_search(arr, arr+len, key);
    if(present){
        cout<<"Present"<<endl;
        // lower_bound(start, end, key) => returns the index of the first element >= key
        auto lb = lower_bound(arr, arr+len, key); // auto nd int* are same
        if((lb-arr)==len){
            cout<<key<<" ka lower bound is not present"<<endl;
        }else{
            cout<<"Lower bound of "<<*lb<<" is "<<(lb-arr)<<endl;
        }
        // upper_bound(start, end, key) => returns the index of the first element > key
        auto ub = upper_bound(arr, arr+len, key);
        if((ub-arr)==len){
            cout<<key<<" ka upper bound does not exist"<<endl;
        }else{
            cout<<"Upper bound of "<<*ub<<" is "<<(ub-arr)<<endl;
        }

        cout<<"Freq of "<<key<<" is "<<(ub-lb)<<endl;
    }else{
        cout<<"Absent!!!"<<endl;
    }

    
    return 0;
}