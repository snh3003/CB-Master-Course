#include<bits/stdc++.h>
using namespace std;

bool cowsPlacedOrNot(vector<int> stalls, int n, int c, int min_sep){
    //place the first cow in the first stall
    int last_cow = stalls[0], count = 1; 
    for(int i=1;i<n;i++){
        if(stalls[i]-last_cow >= min_sep){
            last_cow = stalls[i];
            cout<<"Success "<<last_cow<<endl;
            count++;
            if(count == c){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<int> stalls;
    int n, cows, t, number;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>cows;
        for(int j=0;j<n;j++){
            cin>>number;
            stalls.push_back(number);
        }
        sort(stalls.begin(), stalls.end());
        // Binary_Search
        int start = 0;
        int end = stalls[n-1] - stalls[0];
        cout<<"Initial end: "<<end<<endl;
        int ans = 0;
        while(start<=end){
            int mid = (start+end)/2;
            bool cowsPlaced = cowsPlacedOrNot(stalls, n, cows, mid);
            if(cowsPlaced){
                //i can make my answer larger
                ans = mid;
                start = mid + 1;
            }else{
                end = mid - 1;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}
