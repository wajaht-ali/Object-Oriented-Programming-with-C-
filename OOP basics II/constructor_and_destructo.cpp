// Persist, because quitting won't get you there.

#include <iostream>
#include <string>
using namespace std;

// what are constructors?
// A constructor is a special method which is called automatically when an object is created of that class.
// It has no return type, used to initialize the data members with default values or any other required job.
// Constructors are invoked automatically when an object is created, so we don't need to call them explicitly

// What is a destructor? 
// Destructor is a function which is used to de-allocate the memory.
class Student {
    public: 
        string std_name;
        int age;
        int *r_no;
        
        // creating constructor name with the name same as the class Name
        Student(string n, int a) {  // example of parameterized constructor
            std_name = n;
            age = a;
            r_no = new int;   // default value
            *r_no = 0;
        }
        // creating destructor to de-allocate the memory 
        ~Student() {  // example of parameterized constructor
            cout<<"Hi, I'm constructor."<<endl;
            delete r_no;
        }
        void print() {
            cout<<"Roll no is: "<<*r_no<<endl;
        }
};
int main() {
    Student s1("John", 20);
    cout << s1.std_name << endl;
    cout << s1.age << endl;
    s1.print();
    return 0;
}