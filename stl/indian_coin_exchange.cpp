#include<iostream>
#include<algorithm>
using namespace std;

bool comparator(int a, int b){
    return a<=b;
}

int main(){
    int coin[] = {1,2,5,10,20,50,100,200,500,2000};
    int len = sizeof(coin)/sizeof(int);
    // auto lb1 = lower_bound(coin, coin+len, 168);
    // auto ub = upper_bound(coin, coin+len, 168);
    // cout<<"lb: "<<coin[lb1-coin];
    // cout<<"ub: "<<coin[ub-coin];
    int money, count = 0;
    cin>>money;
    while(money>0){
        auto lb = lower_bound(coin, coin+len, money, comparator);
        cout<<"Lower bound: "<<*lb<<endl;
        int index = lb-coin-1;
        cout<<"index: "<<index<<endl;
        int m = coin[index];
        cout<<m<<" ";
        money -= m;
        cout<<endl<<"Amt remaining: "<<money<<endl;
        count++;
    }
    cout<<endl<<"Min coins required: "<<count<<endl;
}