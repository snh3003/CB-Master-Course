// C++ program to demonstrate that we can use auto to
// save time when creating iterators
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Create a set of strings
    set<string> st;
    st.insert({ "geeks", "for", 
               "geeks", "org" });
 
    // 'it' evaluates to iterator to set of string
    // type automatically
    for (auto it = st.begin(); it != st.end(); it++){
        cout << *it << " ";
    }
    cout<<endl;
    // vector
    vector<string> s = { "geeks", "for", "geeks", "org" };
    for(auto i = s.begin(); i!= s.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    return 0;
}