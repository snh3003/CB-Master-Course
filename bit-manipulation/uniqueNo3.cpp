#include<iostream>
using namespace std;

int main(){
    int n, ans = 0, arr[64] = {0}, ip, power = 1;
    cin>>n;
    //input nos
    for(int i=0;i<n;i++){
        cin>>ip;
        int j=0;
        // take count of all set bits at a particular position
        while(ip>0){
            int lastBit = (ip&1); // returns the last bit
            arr[j] += lastBit;
            j++;
            ip = ip>>1; // right shift the bits
        }
    }
    // convert all bits %3
    for(int j = 0; j<64; j++){
        arr[j] = arr[j] % 3;
        ans += (arr[j]*power);
        power = power<<1; // left shift => 1, 10, 100, ...
    }
    cout<<ans<<endl;
}