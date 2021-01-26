#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[100][100];
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(arr[i],100);
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<endl;
    }
    return 0;
}