#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100], right=0, left=0, Current_Sum=0, Max_Sum=0;
    for(int c=0;c<n;c++){
        cin>>arr[c];
    }
    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){
            Current_Sum=0;
            for(int k=i;k<=j;k++){
                Current_Sum+=arr[k];
            }
            if(Current_Sum>Max_Sum){
                Max_Sum=Current_Sum;
                left=i;
                right=j;
            }
        }
    }
    cout<<"Max sum is: "<<Max_Sum<<" and the sub array is"<<endl;
    cout<<"[";
    for(int c=left;c<=right;c++){
        if(c==right){
            cout<<arr[c];
        }else{
            cout<<arr[c]<<",";
        }
    }
    cout<<"]"<<endl;
}