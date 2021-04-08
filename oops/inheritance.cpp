#include<iostream>
using namespace std;

/*
    Inheritance: Extending the properties of the parent class to the child class
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

class Developer: public Employee{
    public:
        string FavProgrammingLanguage;
    Developer
        (string name, 
         string cmp,
         int age,
         string favProgrammingLanguage):Employee(name, cmp, age){
             FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug(){
        cout<<getName()<<" fixed bug using"<< FavProgrammingLanguage<<endl;
    }
};

class Teacher: public Employee {
    public:
    string Subject;
    void PrepareLesson(){
        cout<<getName()<<" is preparing "<<Subject<< " lesson"<<endl;
    }
    Teacher(string name, string cmp, int age, string subject)
        :Employee(name, cmp, age){
        Subject = subject;
    }
};

int main(){
    Developer dev = Developer("Shahab", "None", 20, " C++");
    dev.fixBug();
    dev.ask_For_Promotion();

    Teacher t = Teacher("Jack", "DPS", 35, "DAA");
    t.PrepareLesson();
    t.ask_For_Promotion();
}