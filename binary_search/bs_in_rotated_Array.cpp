#include<iostream>
using namespace std;

int find_key(int a[], int n, int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid] == key){
            return mid;
        }else if(a[s]<=a[mid]){
            // 2 cases => Element lies on the left or right of the mid
            if(key >= a[s] and key <= a[mid]){
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        else{
            if(key >= a[mid] and key <= a[e]){
                s = mid + 1;
            }else{
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    int n, arr[100000], key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    cout<<find_key(arr, n, key);
}