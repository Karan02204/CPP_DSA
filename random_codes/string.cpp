#include <iostream>
using namespace std;

int main(){
    string str="Hello World, World is beautiful";
    cout << str.rfind("World")<< endl;
    str.append(" helllooooooo");
    cout << str;
}