#include <iostream>
using namespace std;

int main(){
    int n,arr[100];
    cin >>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max1=-1;
    int max2=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max1=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]>max2 && arr[i]<max1){
            max2=arr[i];
        }
    }

    cout <<"Second largest element: " << max2;
}