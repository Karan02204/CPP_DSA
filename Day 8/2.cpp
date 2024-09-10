#include <iostream>
using namespace std;

int countCharacter(string &str,char ch){
    int count = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]==ch){
            count++;
        }
    }
    return count;
}

int main()
{
    string str;
    char ch;
    cout << "Enter a string: ";
    getline(cin,str);
    cout << "Enter the character: ";
    cin >> ch;
    cout << "The character '" << ch << "' appears " << countCharacter(str,ch);
}