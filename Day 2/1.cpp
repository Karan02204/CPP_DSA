#include <iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    int largest=num1;

    if (largest < num2){
        largest = num2;
    }
    else if (largest < num3){
        largest = num3;
    }
    cout << "The largest number is: "<< largest;
}