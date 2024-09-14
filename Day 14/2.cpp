#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    Rectangle(int l, int w){
        length=l;
        breadth=w;
    }

    Rectangle(Rectangle &rect){
        length=rect.length;
        breadth=rect.breadth;
    }

     void display(){
        cout << "Rectangle: " << endl;
        cout << "Length: " << length << ", Width: " << breadth << endl;
    }
};

int main()
{
    int length,width;
    cout<<"Enter the length of rectangle: ";
    cin>>length;
    cout<<"Enter the breadth of rectangle: ";
    cin>>width;

    Rectangle rect1(length,width);
    cout << "Origianl Rectangle:" << endl;
    rect1.display();

    Rectangle rect2= rect1;
    cout << "Copied Rectangle:" << endl;
    rect2.display();
}