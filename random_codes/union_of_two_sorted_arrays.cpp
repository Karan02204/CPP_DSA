#include <iostream>
using namespace std;

int main()
{
    int arr1[]={1,2,2,3,4};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={2,2,3,5};
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int arr3[10];

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(arr1[i]!=arr3[j]){
                arr3[j]=arr1[i];
            }
            else{
                break;
            }

    }
    int p = sizeof(arr3)/sizeof(arr3[0]);
    for(int i=0;i<p;i++){
        cout<<arr3[i]<<" ";
    }

    }
}