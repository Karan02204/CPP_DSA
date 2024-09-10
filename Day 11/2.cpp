#include <iostream>
using namespace std;
int indexfinder(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i+1;
        }
    }
}
int main()
{
    int arr[]={2,4,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=6;
    cout << indexfinder(arr,size,key);
}