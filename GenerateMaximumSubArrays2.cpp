#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[1000], CurrSum[1000];
    int left=0, right=0, MaxSum=0;
    cin>>arr[0];
    CurrSum[0]=arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        CurrSum[i]=CurrSum[i-1]+arr[i];
    }
    for(int j=0;j<n;j++){

        for(int k=j;k<n;k++){
            int CurrentSum=0;
            CurrentSum = CurrSum[k] - CurrSum[j-1];
            if(CurrentSum>MaxSum){
                MaxSum=CurrentSum;
                left=j;
                right=k;
            }
        }
        
    }
    cout<<"Max sum is: "<<MaxSum<<" and the sub array is"<<endl;
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