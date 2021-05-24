#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string fname, lname, rollno;

    Student(string f, string l, string no){
        fname = f;
        lname = l;
        rollno = no;
    }

    bool operator == (const Student &s) const {
        return rollno == s.rollno ? true : false;
    }
};

class Hashfn{
    public:
        size_t operator()(const Student &s) const {
            return s.fname.length() + s.lname.length();
        }
};

int main(){

    unordered_map<Student, int, Hashfn> smap;

    Student s1("Prateek","Narang","010");
    Student s2("Rahul","Kumar","023");
    Student s3("Prateek","Gupta","030");
    Student s4("Rahul","Kumar","120");

    // Add student 
    smap[s1] = 100;
    smap[s2] = 120;
    smap[s3] = 11;
    smap[s4] = 45;

    for(auto x: smap){
        cout<<x.first.fname<<" "<<x.first.rollno<<endl;
    }

}