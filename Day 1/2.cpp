#include <iostream>
using namespace std;

int main(){
    int marks;
    int sum=0;
    for (int i=0;i<5;i++){
        cout << "Enter Grade " << i+1<< ": ";
        cin >>marks;
        sum+=marks;
    }
    double average=(double)sum/5;
    cout <<"The average grade is: " << average;
}