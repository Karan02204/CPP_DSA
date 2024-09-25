#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr1[25] = {0}; // Initialize array with zeros

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    int arr2[100];
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int size = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                arr1[size++] = arr2[j]; // Add common element to arr1
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }
    return 0;
}