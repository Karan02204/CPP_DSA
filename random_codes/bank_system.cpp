#include <iostream>
using namespace std;

class BankAccount{
    private:
    int balance;

    public:

    BankAccount(){
        balance = 0;
    }

    void deposite(int amount){
        if(amount>0) balance+=amount;
    }

    int getBalance(){
        return balance;
    }

    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout << endl;
            cout << getBalance();
        }
        else{
            cout << endl;
            cout<<"Invalid amount"<<endl;
        }
    }
};

int main()
{
    BankAccount b1;
    b1.deposite(100);

    cout << b1.getBalance();

    b1.withdraw(50);
    //cout << endl;
}