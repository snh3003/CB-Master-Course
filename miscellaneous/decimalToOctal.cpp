#include<iostream>
using namespace std;

int dToB(int decimalNumber){
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}

int main(){
    int n;
    cin>>n;
    cout<<dToB(n);
    return 0;
}