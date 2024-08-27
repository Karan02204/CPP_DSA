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

    int sum_odd=0,sum_even=0;
    for (int i=0;i<size;i++){
        if (arr[i]%2==0){
            sum_even+=arr[i];
        }
        else{
            sum_odd+=arr[i];
        }
    }
    cout << "Sum of odd numbers : "<<sum_odd<<endl;
    cout << "Sum of even numbers : "<<sum_even<<endl;
}