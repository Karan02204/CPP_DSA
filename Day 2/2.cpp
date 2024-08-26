#include <iostream>
using namespace std;

int main(){
    int grade;
    cout << "Enter the marks : ";
    cin >> grade;
    string grademark=(grade >= 90 && grade <=100)? "A": (grade >= 80 && grade <90) ? "B" : (grade >= 70 && grade <80) ? "C" : (grade >= 60 && grade <70) ? "D" : "F" ;
    cout << "Grade: " << grademark << endl;
}