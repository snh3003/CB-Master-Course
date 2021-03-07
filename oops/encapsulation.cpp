#include<iostream>
using namespace std;

/*
    Encapsulation is binding together the data and method that manipulate them.
    In simple terms hiding the unnecessary info from the user and showing only the part that concerns him.
    Props cant be handled accessed outside the class without set-ers and get-ers.
*/

class Employee{
    // Access modifier is private by default 
    private:
        string Name, Company;
        int Age;
    // These properties or attributes cannot be accessed outside the class
    public:
        // set-ers
        void setName(string name){
            Name = name;
        }
        void setCompany(string cmp){
            Company = cmp;
        }
        void setAge(int age){
            // validation rule
            if(age>=18){
                Age = age;
            }
        }
        // get-ers
        string getName(){
            return Name;
        }
        string getCompany(){
            return Company;
        }
        int getAge(){
            return Age;
        }
        // method
        void introduce(){
            cout<<"Name: "<<Name<<endl;
            cout<<"Company: "<<Company<<endl;
            cout<<"Age: "<<Age<<endl;
        }
        // constructor
        Employee(string name, string cmp, int age){
            Name = name;
            Company = cmp;
            Age = age;
        }
};

int main(){
    Employee emp1 = Employee("Shahab","None",20);
    emp1.introduce();

    // modifying the age or props
    emp1.setAge(12);
    cout<<emp1.getName()<<" is "<<emp1.getAge()<<" years old."<<endl;
}