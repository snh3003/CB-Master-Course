#include<bits/stdc++.h>
using namespace std;

int first_occ(vector<int> v, int n, int key){
    int start = 0;
    int end = n-1;
    int ans = -1; //Update in a direction that ans value gets lower and lower
    while(start<=end){
        int mid = (start+end)/2;
        if(v[mid]==key){
            ans = mid;
            end = mid-1;
        }else if(v[mid]>key){
            end = mid-1;
        }else{
            start = mid + 1;
        }
    }
    return ans;
}

int last_occ(vector<int> v, int n, int key){
    int start = 0;
    int end = n-1;
    int ans = -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(v[mid]==key){
            ans = mid;
            start = mid+1;
        }else if(v[mid]>key){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> v;
    int n, ip;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ip;
        v.push_back(ip);
    }
    sort(v.begin(), v.end());
    int size = v.size();
    int key;
    cin>>key;
    cout<<"First Occ: "<<first_occ(v, size, key)<<endl;
    cout<<"Last Occ: "<<last_occ(v, size, key)<<endl;
}