#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int search(vector<int> v, int key){
	int start = 0, end = v.size()-1;
	while (start<=end){
        int mid = (start+end)/2;
        if(v[mid]>key){
            end = mid - 1;
        }else if(v[mid]==key){
            return mid;
        }else{
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
	int n, ip;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>ip;
		v.push_back(ip);
	}
	sort(v.begin(), v.end());
	int key;
	cin>>key;
    cout<<search(v, key);
	return 0;
}