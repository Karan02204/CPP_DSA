#include <iostream>
using namespace std;
// a class template is a blueprint for creating classes that operates on different data types
template <class T>
class Calculate{
    private:
    T x,y;

    public:
    Calculate(T num1 , T num2){
        x = num1;
        y = num2;
    }

    void add(){
        T sum = x + y;
        cout << "Sum of " << x << " and " << y << " is " << sum <<endl;
    }
    void sub();
};

template <class T>
void Calculate<T>::sub(){
    T diff = x - y;
    cout << "Difference of " << x << " and " << y << " is " << diff;
}
int main()
{
    //Calculate obj1(5,6);
    //obj1.add();

    Calculate<int> obj1Int(5,7);
    obj1Int.add();

    Calculate<double> obj1double(2.3,5.5);
    obj1double.add();
}