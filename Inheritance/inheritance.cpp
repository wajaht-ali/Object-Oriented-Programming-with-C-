// Persist, because quitting won't get you there.

#include <iostream>
#include <string>
using namespace std;

class Human {
    public:
    string name;
    int age;
};


class Student : public Human  {
    public:
        int rollno;

        void getInfo() {
            cout<<"This name is: "<<name<<endl;
            cout<<"This age is: "<<age<<endl;
            cout<<"This rollno is: "<<rollno<<endl;
        }
};

int main() {
    Student s1;
    s1.rollno = 23;
    s1.age = 10;
    s1.name = "Ali";
    s1.getInfo();

    return 0;
}