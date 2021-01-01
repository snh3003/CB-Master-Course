#include<bits/stdc++.h>
using namespace std;

bool bs(vector<int> v, int size, int key){

    int last = size-1;
    int first = 0;
    
    bool flag = false;
    while(first<=last){
        int mid = (first+last)/2;
        if(v[mid]>key){
            last = mid - 1;
        }else if(v[mid]<key){
            first = mid + 1;
        }else if(v[mid]==key){
            flag = true;
            return flag;
        }else{
            return mid;
        }
    }
    return flag;
}

int main(){
    vector<int> v{1,3,5,6,7,8,9,10};
    // for(auto i: v){
    //     cout<<i<<" : ";
    // }
    int size = v.size();
    // cout<<"Size: "<<size<<endl;
    int key;
    cin>>key;
    bool present = bs(v, size, key);
    if(present){
        cout<<"Element "<<key<<" is present"<<endl;
    }else{
        cout<<"Element is absent!!!"<<endl;
    }
    return 0;
}