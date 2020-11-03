#include<iostream>
using namespace std;

int main(){

    int **arr; 
    int row;
    cin>>row;

    // array of row heads created
    arr = new int *[row];

    // columns with increasing size created
    for(int i=0;i<row;i++){
        arr[i] = new int [i+1]{0};
    }
    int val=1;
    for(int j=0;j<row;j++){
        for(int k=0;k<=j;k++){
            arr[j][k]=val;
            val++;
            cout<<arr[j][k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}