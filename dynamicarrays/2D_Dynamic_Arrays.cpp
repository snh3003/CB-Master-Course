#include<iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    //create an array of row heads
    int **arr = new int *[row];
    //create a 2D array
    for(int i=0;i<row;i++){
        arr[i] = new int[col]{0};
    }
    // giving the values
    int val=1;
    for(int j=0;j<row;j++){
        for(int k=0;k<col;k++){
            arr[j][k] = val;
            val++;
            cout<<arr[j][k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}