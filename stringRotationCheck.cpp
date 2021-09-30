#include<bits/stdc++.h>
using namespace std;

bool checkRotation(string s1, string s2){
    if(s1.length() != s2.length()) return false;

    int freq[26] = {0};
    for(int i = 0; i < s1.length(); i++){
        freq[s1[i] - 'a']++;
    }
    for(int i = 0; i < s2.length(); i++){
        freq[s2[i] - 'a']--;
    }
    for(int i = 0; i < 26; i++){
        if(freq[i] != 0) return false;
    }
    return true;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(checkRotation(s1,s2)) cout<<"Yes";
    else cout<<"No";
    return 0;
}