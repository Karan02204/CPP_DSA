#include <iostream>
using namespace std;
bool search(int arr[],int size,int key){
    if(size==0)return false;;
    if(arr[0]==key)return true;
    else{
        search(arr+1,size-1,key);
    }
}
int main()
{
    int arr[]={2,4,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=6;
    if(search(arr,size,key)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}