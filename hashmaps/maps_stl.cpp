#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> m;

    // insert 
    m.insert(make_pair("Mango",100));

    pair<string, int> p;
    p.first = "Apple";
    p.second = 120;
    
    m.insert(p);

    m["Banana"] = 20;

    // search
    string key;
    cin>>key;

    auto it = m.find(key); // returns an it to the node
    if(it!=m.end()){
        cout<<"Price of "<<key<<" is "<<m[key]<<endl;
    }else{
        cout<<"Fruit isnt present"<<endl;
    }

    // Erase
    m.erase("Apple");

    m[key] += 20;

    // map stores the keys only once
    // m["Banana"] = 40 will update the previous value

    if(m.count(key)){
        cout<<"Price: "<<m[key]<<endl;
    }else{
        cout<<"Not found";
    }

    m["Grapes"] = 40;
    m["Peach"] = 50;

    // print all key-value pairs
    cout<<"For loop"<<endl;
    for(auto it = m.begin(); it!=m.end(); it++){
        cout<<it->first<<" and "<<it->second<<endl;
    }
    cout<<"For each loop"<<endl;
    for(auto x: m){
        cout<<x.first<<" and "<<x.second<<endl;
    }

}