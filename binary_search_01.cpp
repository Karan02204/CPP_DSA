#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int low = 0;
    int high = size - 1;
    
    
    while (low<=high){
        int ans=-1;
        int mid=(low+high)/2;
        if (arr[mid] == key){
            ans=mid;
            high=mid-1;
            return mid;
        }
        if (key>arr[mid]){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}
int main(){
    int arr[7]={1,2,3,3,3,3,5};
    cout <<"Index of 3 is " << binarySearch(arr,7,3);
}