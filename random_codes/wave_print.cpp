#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols];
    cout << "Enter the 2D array: " << endl;
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Wave print of the 2D array: " << endl;
    for (int j=0; j<cols; j++){
        if (j % 2 == 0){ // even column, print top-down
            for (int i=0; i<rows; i++){
                cout << arr[i][j] << " ";
            }
        } else { // odd column, print bottom-up
            for (int i=rows-1; i>=0; i--){
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}