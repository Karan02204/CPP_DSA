#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2,2,4,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool found = true;
    int index;
    for(int i=0;i<size;i++){
        int temp = arr[i];
        for(int j=i+1;j<size;j++){
            if(arr[j] == temp){
                found = false;
            }
        }
        index = i;
    }
    if(!found){
        cout << "The single element is : " << arr[index] << endl;
    }
}