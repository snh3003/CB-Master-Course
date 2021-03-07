#include<iostream>
using namespace std;
/* 
    Abstraction: Hiding complex things behind a procedure(interface) that makes those things look simple.
    Example: Hiding the functionality of how a camera click picture from the user.
    Abstract class is used.
*/

// abstract function
class AbstractEmployee{
    // abstract function
    virtual void ask_For_Promotion() = 0;
};

class Employee: AbstractEmployee{
    
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
        
        // providing functionalities to the abstract method
        void ask_For_Promotion(){
            if(Age>=30){
                cout<<Name<<" got promoted."<<endl;
            }else{
                cout<<"Sorry!!! Promotion denied."<<endl;
            }
        }
};

int main(){
    Employee emp1 = Employee("Shahab","None",20);
    Employee emp2 = Employee("Danish","uber",30);

    emp1.ask_For_Promotion();
    emp2.ask_For_Promotion();
}