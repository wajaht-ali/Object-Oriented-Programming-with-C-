// Persist, because quitting won't get you there.

#include <iostream>
#include <string>
using namespace std;

// Copy Ccnsturctors
// Special constructors used to copy properties of one object into another
class Student {
    public:
        string name;
        string subject;
        int score;

        Student(string name, string subject, int score) {
            // this pointer refers to the current object
            this->name = name;
            this->subject = subject;
            this->score = score;
        }

        void print_info() {
            cout << "Name: " << name << endl;
            cout << "Subject: " << subject << endl;
            cout << "Score: " << score << endl;
        }
};

int main() {
    Student s1("Wajahat Ali", "C++", 80);
    Student s2(s1);
    s2.print_info();
    return 0;
}