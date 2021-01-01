#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comparator(int a, int b){
    return a<=b;
}

int main(){
    // vector<datatype> name{};
    vector<int> v{1,3,5,2,9,7,6}; 
    for(auto it = v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    sort(v.begin(), v.end());
    cout<<"After sorting "<<endl;
    for(auto it = v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    int key;
    cin>>key;
    bool present = binary_search(v.begin(), v.end(), key);
    if(present){
        cout<<"Found!!!"<<endl;
    }else{
        cout<<"Absent!!!"<<endl;
    }
    return 0;
}