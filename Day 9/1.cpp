#include <iostream>
using namespace std;

int main()
{
    int n;
    n=5;
    int* ptr=&n;
    cout << n << endl;
    cout << *ptr;
}