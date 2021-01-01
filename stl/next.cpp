#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
        vector<int> arr;
		for(int j=0;j<n;j++){
			int no;
            cin>>no;
			arr.push_back(no);
		}
		next_permutation(arr.begin(), arr.end());
		for(auto x:arr){
			cout<<x<<" ";
		}
        cout<<endl;
	}
	return 0;
}