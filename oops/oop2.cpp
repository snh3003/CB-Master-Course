#include<iostream>
using namespace std;

class Student{
    public:
        string Name, Class;
        int Age;
    void introduce(){
        cout<<"Name: "<<Name<<"; Class: "<<Class<<"; Age: "<<Age<<endl;
    }
    /*
        A constructor is always present by default.
        Constructor rules: 
            1) Doesnt have a return type(void, int, ..) 
            2) Has the same name as the class
            3) It's access modifier is public by default
    */
   Student(string name, string cls, int age){
       Name = name;
       Class = cls;
       Age = age;
   }
};

int main(){
    Student std1 = Student("Shahab", "CSE - D", 20);
    std1.introduce();
    Student std2 = Student("Rahul","CSE - C", 20);
    std2.introduce();
}