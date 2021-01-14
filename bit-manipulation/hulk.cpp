#include<iostream>
using namespace std;

int powOfTwo(int ip){
	int j=1, k = 0;;
	while(k<=ip){
			k = 1<<j;
			j++;
	};
	return k;
}

int main() {
	int t, ip;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>ip;
		int pow = powOfTwo(ip), count = 1;
		// cout<<"Pow: "<<pow;
		int stepsRemaining = ip-(pow>>1);
        // cout<<" Steps: "<<stepsRemaining<<endl;
        ip = stepsRemaining;
		while(stepsRemaining != 1 && stepsRemaining != 2 && stepsRemaining != 0){
			pow = powOfTwo(stepsRemaining);
			stepsRemaining = ip-(pow>>1);
            ip = stepsRemaining;
            count++;
		}
        if(stepsRemaining == 1 || stepsRemaining == 2){
            count++;
        }
		// int result = 1+stepsRemaining;
		cout<<count<<endl;
	}
	return 0;
}