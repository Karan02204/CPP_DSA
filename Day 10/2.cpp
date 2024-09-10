#include <iostream>
using namespace std;

bool isPalindrome(string &str){
    string str1;
    for(char c : str){
        if(isalnum(c)){
            str1 += tolower(c);
        }
    }
    int left = 0, right = str1.length() - 1;
    while (left < right) {
        if (str1[left] != str1[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    string str;
    str="A man, a plan, a canal, Panama";
    cout << boolalpha << isPalindrome(str) << endl;
}