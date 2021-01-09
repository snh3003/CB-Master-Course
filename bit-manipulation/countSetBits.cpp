#include<iostream>
using namespace std;

int main(){
    int t, ip;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>ip;
        int count = 0;
        while(ip>0){
            ip = (ip&(ip-1));
            count++;
        }
        cout<<count<<endl;
    }
}