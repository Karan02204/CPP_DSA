#include <iostream>
using namespace std;
int stringLength(string &str){
    int length = 0;
    for (int i = 0; i < str.length(); i++) {
        length++;
    }
    return length;
}
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin,str);
    cout << "Length of the given string: " << stringLength(str);

}