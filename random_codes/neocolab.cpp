#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int positives = 0, negatives = 0, zeroes = 0;

    // Print array elements and count positives, negatives, and zeroes
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        if (arr[i] > 0) {
            positives++;
        } else if (arr[i] < 0) {
            negatives++;
        } else {
            zeroes++;
        }
    }
    cout << endl;

    // Display the counts
    cout << "Positives: " << positives << endl;
    cout << "Negatives: " << negatives << endl;
    cout << "Zeroes: " << zeroes << endl;

    // Deallocate memory
    delete[] arr;

    return 0;
}