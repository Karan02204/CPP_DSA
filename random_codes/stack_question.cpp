#include <stack>
#include <iostream>
using namespace std;

int main()
{
    stack<string> s1;
    string str = "Hello World , How are you?";
    int n = str.length();

    for(int i=0;i<n;i++){
        string temp = "";
        while(str[i]!= ' ' && i<str.length()){
            temp+=str[i];
            i++;
        }
        s1.push(temp);
    }

    while(!s1.empty()){
        cout << s1.top() << " ";
        s1.pop();
    }


}