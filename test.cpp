#include <iostream>
using namespace std;

int main(){
    int arr[5];
    for (int i=0;i<5;i++){
        cin >> arr[i];
    }
    for (int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
}
// int age;
    // cout << "enter your age: "<< endl;
    // cin >> age;
    // cout << "Your age is :" << age;
    // if (age >= 0) cout << "Positive"<<endl;
    // else cout << "Negative";

    // int grade;
    // cout << "Enter the marks : ";
    // cin >> grade;
    // (grade >= 90) ? "Grade A": (grade >= 80 && grade <90) ? "Grade B" : (grade >= 70 && grade <80) ? "Grade C" : (grade >= 60 && grade <70) ? "Grade D" : "Grade F" ;
    // else if (grade >= 80 && grade <90) cout << "Grade B" << endl;
    // else if (grade >= 70 && grade <80) cout << "Grade C" << endl;
    // else if (grade >= 60 && grade <70) cout << "Grade D" << endl;
    // else cout << "Grade F" << endl;
    // int num;
    // int sum=0;
    // int count=0;
    // cin >> num;

    // for (int i=1 ; i<=num; i++){
    //     sum+=i;
    //     count++;
    // }
    // cout << "Sum of first natural numbers is: "<< sum << endl;
    // cout << "Average of n natural numbers is " << sum/count;
    // int i=0;

    // while (i <= 10){
    //     cout << i << endl;
    // }

    // string color;
    // cout << "Enter the Color : " << endl;
    // cin >> color ;

    // if (color == "Red") cout << "Stop";
    // else if (color == "Yellow") cout << "Slow Down";
    // else if (color == "Green") cout << "Go";

    // int no_of_responses;
    // int array[100];
    // int count_array[100];
    
    // cin >> no_of_responses;
    // for (int i=0;i<no_of_responses;i++){
    //     cin >> array[i];
    // }
    
    // int count=0;
    // for (int i=0;i<no_of_responses;i++){
    //     for (int j=1;j<no_of_responses;j++){
    //         if (array[i]==array[j]){
    //             count++;
    //         }
    //         count_array[i]=count;
    //     }
    //     count=0;
    // }
    // for (int i=0;i<no_of_responses;i++){
    //     cout << array[i] << ": " << count_array[i] << " " <<endl;
    // }












// time complexity measures how much the time is taken by the algorithm with the growth in the input.
// Big O- worst case , theta - avg case ,  omega - best case
// O(1)- when we know the exact amount of time for the algorithm - constant time
// O(n)- when we don't know the exact amount of time for the algorithm - linear time
// O(n^2)- quadratic time - for one loop nest in another loop
//O(n^3)- cubic time - for 3  nested loops
//O(logn)- logrithmic time

// space complexity measures how much extra memory an alogrithm needs as the input size increases.we usually only count the memory used by extra variables, not the input data itself .