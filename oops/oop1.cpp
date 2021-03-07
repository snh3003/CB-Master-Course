#include<iostream>
using namespace std;

class Employee{
    // classes are automatically private
    // access modifiers are public, private, protected
    // members of a class are its attributes and behaviours
public:
    string Name, Company;
    int Age;
    // class behaviours are methods or functions
    void Introduce(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Company: "<<Company<<endl;
        cout<<"Age: "<<Age<<endl;
    }
};

int main(){
    
    // create class object
    Employee employee1; // className objName
    employee1.Name = "Shahab";
    employee1.Company = "Ayska";
    employee1.Age = 20;
    employee1.Introduce();

    // New class obj
    Employee employee2;
    employee2.Name = "Saquib";
    employee2.Company = "Curl";
    employee2.Age = 23;
    // Number of times we invoke the behaviour/method using the class obj -> o/p will print
    employee2.Introduce();
    employee2.Introduce();

}