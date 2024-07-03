// Persist, because quitting won't get you there.

#include <iostream>
#include <string>
using namespace std;

class Teacher {
    // Access Modifiers
    private:
        double salary;

    public: 
        string name;
        string subject;
        string dept;
        // Member functions
        void setSalary(double sal) {
            salary = sal;
        }
        double getSalary() {
            return salary;
        }

};

int main() {
    // create an object t1;
    Teacher t1;
    t1.name = "Ali";
    t1.dept = "IT";
    t1.subject = "DSA";

    // set salary value
    t1.setSalary(25000);

    // get salary value
    cout<<t1.getSalary()<<endl;

    cout<<t1.dept<<endl;
    return 0;
}