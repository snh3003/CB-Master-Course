#include<bits/stdc++.h>
using namespace std;

void printChar(string s){
    int freq[26] = {0};
    //memset(freq,0,sizeof(freq));

    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++;
    }

    for(int i=0;i<s.length();i++){
        cout<<"Freq "<<s[i]<<" : "<<freq[s[i]-'a']<<endl;
    }    
}

int main(){
    string s;
    cin>>s;
    printChar(s);
}