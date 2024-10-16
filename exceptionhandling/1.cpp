//Exception Handling 

// An exception is an unexpected event that occurs during program execution


//How do we handle?

/*
    try{
        code that may raise exception
        throw
    }

    catch(e){
        code to handle the exception
    }

    1. We will place the code that might generate exception inside the try block.
    Every try block is followed by the catch block.

    2.the catch block cannot be used without the try block

    3. 
*/


#include <iostream>
using namespace std;

int main()
{
    double numerator , denominator;

    cout << "Enter numerator: " ;
    cin >> numerator ;
    cout << "Enter denominator: " ;
    cin >> denominator ;

    

    // try{
    //     if(denominator == 0){
    //         throw 0;
    //     }
        cout << "statement 1" << endl;
        double answer = numerator/ denominator;
        cout << "Anwer is : " << answer << endl;
        cout << "statement 2" << endl;
    // }

    // catch(int e){
    //     cout << "Execption caught ->" << e << endl;
    // }

    cout << "statement 3" << endl;

    
}