#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ip;
        cin>>ip;
        v.push_back(ip);
    }
    int max1=v[0], max2=v[0];
    for(int i=1;i<n;i++){
        if(v[i]>max1){
            max2=max1;
            max1 = v[i];
        }else if(v[i]>max2){
            max2 = v[i];
        } 
    }
    cout<<max1<<" "<<max2<<endl;
}
