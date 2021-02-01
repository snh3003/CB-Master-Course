#include<bits/stdc++.h>
using namespace std;

int findK(vector<vector<int>> &arr, int n, int m){
    int TopRow=0,LeftCol=0;
    int BotRow=m-1, RightCol=n-1;
    int dir=0;
    while(TopRow<=BotRow && LeftCol<=RightCol){
        
        // Row traverse Left -> Right
        if(dir==0){
            cout<<"Row traverse Left -> Right\n";
            for(int i=LeftCol; i<=RightCol; i++){
                cout<<arr[TopRow][i]<<",";
            }
            TopRow++;
            dir=1;
        }
        // Col traverse Top -> Bottom
        else if(dir==1){
            cout<<"\nCol traverse Top -> Bottom\n";
            for(int j=TopRow; j<=BotRow; j++){
                cout<<arr[j][RightCol]<<",";
            }
            RightCol--;
            dir = 2;
        }
        // Row traverse Right -> Left
        else if(dir==2){
            cout<<"\nRow traverse Right -> Left\n";
            for(int k=RightCol; k>=LeftCol; k--){
                cout<<arr[BotRow][k]<<",";
            }
            BotRow--;
            dir=3;
        }
        // Col traverse Bottom -> Top
        else if(dir==3){
            cout<<"\nCol traverse Bottom -> Top\n";
            for(int l=BotRow;l>=TopRow;l--){
                cout<<arr[l][LeftCol]<<",";
            }
            LeftCol++;
            dir=0;
        }
    }
    
    return 0;
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> v(n, vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    findK(v, n, m);
    // for(int x: spiral){
    //     cout<<x<< " ";
    // }
}