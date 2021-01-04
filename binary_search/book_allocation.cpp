#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> v, int n, int m, int curr_min){
    int studentUsed = 1;
    int pages_read = 0;
    for(int i=0;i<n;i++){
        if(pages_read + v[i]>curr_min){
            studentUsed++;
            pages_read = v[i];
            if(studentUsed>m){
                return false;
            }
        }else{
            pages_read += v[i];
        }
    }
    return true;
}

int Max_pages(vector<int> v, int n, int m){
    int sum = 0;
    if(n<m){
        return -1;
    }
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    int start = v[v.size()-1]; //takes the largest value among the pages
    int end = sum;
    int ans = INT_MAX;

    while(start<=end){
        int mid = (start+end)/2;
        if(isPossible(v, n, m, mid)){
            ans = min(ans, mid);
            end = mid-1;
        }else{
        // not possible to divide x pages
        // increase the no of pages
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int t, ip;
    cin>>t;

    for(int i=0;i<t;i++){
        int n, m;
        cin>>n>>m;

        vector<int> v;
        for(int j=0;j<n;j++){
            cin>>ip;
            v.push_back(ip);
        }
        sort(v.begin(), v.end());
        cout<<Max_pages(v, n, m)<<endl;
    }
}