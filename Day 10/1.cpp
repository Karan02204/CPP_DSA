#include <iostream>
using namespace std;

int findMax(const int arr[],int size){
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[]={1,5,3,9,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << "The maximum element in the given array is: "<<findMax(arr,n);
}