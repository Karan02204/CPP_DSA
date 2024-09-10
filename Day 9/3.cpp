#include <iostream>
using namespace std;

int main()
{
    int n=5;
    int *ptr1=&n;
    int **ptr2=&ptr1;

    cout << n << endl;
    cout << *ptr1 << endl;
    cout << **ptr2 <<endl;
}