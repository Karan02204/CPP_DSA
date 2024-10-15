#include <iostream>
using namespace std;

// a function template is a blueprint for creating functions that operates on different data types
template <typename T>
T add(T num1 , T num2){
    return num1 + num2;
}
int main()
{
    cout << add<int>(4,5) << endl;
    cout << add<double>(4.0,5.1) << endl;
}