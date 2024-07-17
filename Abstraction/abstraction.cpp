// Persist, because quitting won't get you there.

#include <iostream>
using namespace std;

//virtual functions
// class Shape {
//     virtual void draw() = 0; //pure virtual func

// };
// class Circle : public Shape {
//     public:
//         void draw() {
//             cout<<"Drawing a circle"<<endl;
//         }
// };

//static keyword
class Dad {
    public:
        static int x;
        void incX() {
           x= x+1;
           cout<<x<<endl;
        }
};

int main() {
    Dad d1;
    d1.x = 5;
    d1.incX();
    return 0;
}