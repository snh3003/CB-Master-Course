#include<iostream>
using namespace std;

int increaseDecreaseSeq(int n){
    int min = -1, max = -1;
    bool flag=true;
    while(n>0){
        int temp;
        cin>>temp;
        if(max==-1){
            if(min<temp){
                min=temp;
            }else{
                max=temp;
            }
        }
        else{
            if(max<temp)
                max=temp;
            else
            {
                flag=false;
                break;
            }
            
        }
        n--;
    }
    return flag;
}

int main(){
    int n;
    cin>>n;
    increaseDecreaseSeq(n);
    return 0;
}