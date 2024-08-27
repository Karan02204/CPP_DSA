#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout <<"Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    cout << "Addition : " << num1+num2 <<endl;
    cout << "Subtraction : " << num1-num2 << endl;
    cout << "Multiplication : " <<num1*num2 << endl;
    if (num2==0){
        cout << "Division by zero not possible" << endl;
    }
    else {
        cout << "Division : " << (double)num1/num2 << endl;
    }
    if (num2 ==0){
        cout << "No Modulo by zero";
    }
    else{
        cout << "Modulus : " << num1%num2 << endl;
    }
    return 0;
}