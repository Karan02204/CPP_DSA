#include <iostream>
using namespace std;

int main(){
    int size,arr[100];
    cout<<"Enter the size of the array: ";
    cin >> size;
    cout << "Enter the array : ";
    for (int i=0;i<size;i++){
        cin >> arr[i];
    }

    int sum=0;
    for (int i=0;i<size;i++){
        sum+=arr[i];
    }

    cout << "Sum of the array : " << sum;
}