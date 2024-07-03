// Persist, because quitting won't get you there.

#include <iostream>
#include <string>
using namespace std;
// In this example, the sensitive data has been hidden by declaring them under 'private' access modifier in
// order to achieve the data hiding.

class Account {
    private:
        double balance;
        string password;
    public:
        string user_name;
        string acc_id;
        string acc_type;

        void setValues(double amount, string password_key) {
            balance = amount;
            password = password_key;
        }
        double getBalance() {
            return balance;
        }

        string getPassword() {
            return password;
        }
};

int main() {
    Account User1;
    User1.setValues(10000, "User123");
    cout<<"Your balance is: "<<User1.getBalance()<<endl;
    cout<<"Your password is: "<<User1.getPassword()<<endl;
    return 0;
}