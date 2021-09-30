#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    int len = s.length();
    stack<char> st;
    bool check = true;
    for(int i=0;i<len;i++){
        if(s[i]=='[' or s[i] == '('  or s[i] == '{'){
            st.push(s[i]);
        }
        else if(s[i]==']'){
            if(!st.empty() and st.top()=='['){
                st.pop();
            }else{
                check = false;
            }
        }
        else if(s[i] == ')'){
            if(!st.empty() and st.top()=='('){
                st.pop();
            }else{
                check = false;
            }
        }
        else if(s[i] == '}'){
            if(!st.empty() and st.top()=='{'){
                st.pop();
            }else{
                check = false;
            }
        }
    }
    if(!st.empty()){
        check = false;
    }
    return check;
}

int main(){
    string s;
    cin>>s;
    isValid(s) ? cout<<"Yes" : cout<<"No";
}