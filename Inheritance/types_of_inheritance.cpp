// Persist, because quitting won't get you there.

#include <iostream>
#include <string>
using namespace std;

// Multiple inheritance
// class Person {
//     public:
//         string name;
//         int age;
// };

// class Student : public Person {
//     public:
//         int rollno;
// };

// class GradStudent : public Student {
//     public:
//         string researchArea;
//         void getInfo() {
//             cout<<researchArea<<endl;
//         }
// };

// Multilevel inheritance
// class Teacher {
//     public:
//         int salary;
//         string subject;
// };

// class TA : public Person, public Teacher {

// };

// Hierachial inheritance 
class Person {
    public:
        int age;
        string name;
};

class Student : public Person {
    public:
        int rollno;
};

class Teacher : public Person {
    public:
        int salary;
};


int main() {
    Teacher t1;
    t1.age = 41;
    t1.name = "ABC";
    t1.salary = 40000;

    cout<<t1.age<<endl;
    cout<<t1.name<<endl;
    cout<<t1.salary<<endl;
    return 0;
}