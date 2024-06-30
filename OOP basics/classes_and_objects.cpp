// Persist, because quitting won't get you there.

#include <iostream>
using namespace std;

// Use "class" keyword following the name of class you want to create e.g, Student, Employee, Car
class Student {
    // Data members
    public:         
        string name;
        int age;

    // Member Functions or Methods to manipulate data
    void print(string str, int age) {
        cout<<"Your name is: "<<str<<endl;
        cout<<"Your age is: "<<age<<endl;
    }
};
 // semicolon at the end of brackets is essential, else it'll result a syntax error

int main() {
    // create an object of class Student
    // Formate 'class name' following by 'object name'
    Student student;

    // now you can access data members and methods of class using (dot) operator
    student.print("Wajahat", 22);
    return 0;
}