#include<iostream>
using namespace std;

class Bank{
    private:
        int balance = 20000;
        int pin = 1345;

    public:
        void setbalan(int deposit){
            this->balance = this->balance + deposit;
        }
        void getbalan(int pin){
            if (this->pin == pin)
            {
                cout << "balance is: " << this->balance << endl;
            }
            else{
                cout << "Enter valid pin" << endl;
            }
            
        }
};

int main(){

    Bank user1;

    int deposit = 1000;

    int pin;
    cout << "Enter pin: ";
    cin >> pin;

    user1.setbalan(deposit);

    user1.getbalan(pin);

    return 0; 
}