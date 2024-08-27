#include <iostream>
using namespace std;

int main(){
    int size,arr[100];
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << "Enter the array : ";
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }

    int count_odd=0,count_even=0;
    for (int i=0;i<size;i++){
        if (arr[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }

    cout << "Number of odd numbers : " << count_odd << endl;
    cout << "Number of even numbers : " << count_even << endl;
}