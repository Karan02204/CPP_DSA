// write a code to find the min and max values in an array.

#include <iostream>
#include <climits> // for INT_MIN and INT_MAX
using namespace std;
int getMin(int arr[],int size){
    int min= INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout << "The min number is : " <<min;       
}
int main(){
    int array[5]={1,5,3,2,6};
    getMin(array,5);
}