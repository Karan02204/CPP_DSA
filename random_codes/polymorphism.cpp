#include <iostream>
using namespace std;
//Implementation in C++
    // 1. Function overloading

void add(int num1 ,int num2){
    cout << "Sum of two int is : " << num1 + num2 << endl;
}                                            // compile time polymorphism - because it is decided on the compile time , which method is gonna be called
void add(int num1 ,int num2, int num3){
    cout << "Sum of three int is : " << num1 + num2 + num3 << endl;
}
void add(double num1 ,double num2){
    cout << "Sum of two double is : " << num1 + num2  << endl;
}

// 2. Operator overloading - compile time polymorphism

class Counter {
    private:
    int value;

    public:
    Counter( int val) {
        value = val;
    }

    void operator ++(int){  // operator overloading
        value +=5;
    }

    void print(){
        cout << "Value is : " << value << endl;
    }
};

// run time polymorphism
// function overriding

class Base{
    public:
    virtual void print(){
        cout << "from base";
    }
};

class Derived : public Base {
    public:
    void print() override{
        cout << "From derived";
    }
};
int main()
{
    // int a = 5;
    // int b = 10;
    // string c = "hello";
    // string d = "world";

    // cout << a + b << endl;
    // cout << c + d << endl;

    // Counter c1(5);
    // c1.print();
    // c1++;
    // c1.print();

    Base *d1 = new Derived();
    d1->print();
}