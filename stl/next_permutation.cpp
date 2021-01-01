#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v{1,2,3};
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    next_permutation(v.begin(), v.end());
    cout<<"First permutation: ";
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl<<"Second permutation: ";
    next_permutation(v.begin(), v.end());
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl<<"Third permutation: ";
    next_permutation(v.begin(), v.end());
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl<<"Forth permutation: ";
    next_permutation(v.begin(), v.end());
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}