// Persist, because quitting won't get you there.

#include <iostream>
using namespace std;

// Compile time polymorphism - Constructor overloading
class Human {
    public:
        int age;
        string name;
        string gender;

        Human() {
            cout<<"Non-parameterized constructor"<<endl;
        }
        Human(string name) {
            this->name = name;
            cout<<"Parameterized constructor"<<endl;
        }
};

// Function overloading
class Print {
    public:
        void show(int x) {
            cout<<"Int: "<<x<<endl;
        }

        void show(char ch) {
            cout<<"Char: "<<ch<<endl;
        }
};

// Runtime time polymorphism - Function overriding

class A {
    public:
        int age;
        void print() {
            cout<<"Parent func"<<endl;
        }
};
class B : public A {
    public:
        void print() {
            cout<<"Child func"<<endl;
        }
};


// Virtual functions
class Dad {
    public:
        virtual void getInfo() {
            cout<<"Parent v.func"<<endl;
        }
};  

class Son : public Dad {
    public:
        void getInfo() {
            cout<<"Child v.func"<<endl;
        }
};

int main() {
    Son p1;
    p1.getInfo();
    return 0;
}