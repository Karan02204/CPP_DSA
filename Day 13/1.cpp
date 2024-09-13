#include <iostream>
using namespace std;

int main()
{
    int* num = new int;

    *num=5;
    cout << "The dynamic variable is: " << *num;

}