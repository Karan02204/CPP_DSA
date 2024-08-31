#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[3][4];
    cout << "Enter the array 2D array: " << endl;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;
    int sum=0,index=-1,max=INT_MIN;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout << arr[i][j] << " ";
            sum+=arr[i][j];
        }
        
        if (sum>max){
            max=sum;
            index = i;
        }
        cout << endl;

    }
    cout <<"Maximum Sum: " << max <<endl;
    cout << "Maximum Sum row index : " << index <<endl;
}