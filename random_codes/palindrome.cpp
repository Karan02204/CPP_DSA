#include <iostream>
using namespace std;

char tolower(char ch){
    if (ch>='a' && ch <= 'z'){
        return ch;
    }
    return ch - 'A' + 'a';
}
bool ispalindrome(char arr[],int size){
    int s=0;
    int e=size-1;

    while(s<e){
        if(arr[s]!=arr[e]){
            return false;
        }
        else {
            s++;
            e--;
        }
    }
    return true;
}
int main(){
    char arr[100];
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << "Enter the array :";
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }
    

    for (int i=0;i<size;i++){
        arr[i]=tolower(arr[i]);
    }

    if (ispalindrome(arr,size)){
        cout << "The array is a palindrome";
    }
    else {
        cout << "The array is not a palindrome";
    }
}