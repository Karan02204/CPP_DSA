#include <iostream>
using namespace std;

string concatenateString(string &str1,string &str2){
    string str3= str1 + str2;
    return str3;
    

}

int main()
{
    string str1;
    string str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
    cout << "The concatenated string is: ";
    cout << concatenateString(str1,str2);

}