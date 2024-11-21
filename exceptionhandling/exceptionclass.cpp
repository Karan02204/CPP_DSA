#include <iostream>
using namespace std;

class InsufficientFunds : public exception{
    public:
    string message;

    InsufficientFunds(double balance , double amount){
        message = "Insufficient funds : Attempted to withdraw " + to_string(amount) + " , but the balance is " + to_string(balance);
    }

    const char* what() const noexcept override{
        return message.c_str();
    }
};

class BankAccount{
    public:
    double balance;
    BankAccount(double initialBalance){
        balance = initialBalance;
    }

    void withdraw(double amount){
        if(amount>balance){
            throw InsufficientFunds(balance,amount);
        }

        balance -= amount;

        cout << "Withdraw successfull, remaining balance is: " << balance << endl;
    }
};

int main()
{
    BankAccount acc(500);
    try{
        acc.withdraw(450);
    }

    catch(InsufficientFunds e){
        cout << "Exception: " << e.what() << endl;
    }
}