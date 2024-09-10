
#include <iostream>
using namespace std;
void printNum(int n){ //tail recursion
    if(n==0)return;
    cout << n << " ";
    printNum(n-1);
}
void printNum1(int n){ //head recursion
    if(n==0)return;
    printNum1(n-1);
    cout << n << " ";
}
int power(int n){
    if(n==0)return 1;
    int result=2*power(n-1);
    return result;
}

int climbstair(int n){
    if(n<2)return 1;
    return climbstair(n-1) + climbstair(n-2);
}

bool isSorted(int arr[],int size){
    //base
    if(size==0 || size==1) return true;

    if(arr[0]>arr[1]) return false;
    else{
        return isSorted(arr+1,size-1);
    }
}

int sumofarray(int arr[],int size){
    //base
    if(size==0)return 0;
    if(size==1)return arr[0];
    else{
        return arr[0]+sumofarray(arr+1,size-1);
    }
}

bool search(int arr[],int size,int key){
    if(size==0)return false;
    if(arr[0]==key)return true;
    else{
        search(arr+1,size-1,key);
    }
}
int main()
{
    // printNum(5);
    // cout << endl;
    // printNum1(5);
    // cout << endl;
    // cout << power(5);
    // cout << endl;
    // cout << climbstair(3);

    int arr[5]={1,2,3,4,5};
    cout << search(arr,5,6);
    //cout << sumofarray(arr,5);
    // cout << isSorted(arr,5);
}