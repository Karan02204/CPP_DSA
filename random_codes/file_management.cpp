#include <iostream>
#include <fstream>
using namespace std;

//ifstream -> to read from a file
//ofstream -> create/open write to a file

int main()
{
    //ofstream file("test.txt");

    // if(!file){
    //     cout << "error" << endl;
    // }

    // else{
    //     cout << "success" << endl;
    // }

    // if(file.is_open()){

    // }

    // if(file.fail()){

    // }


    //file.close();;


    // ifstream file("test.txt");

    // if(!file){
    //     cout << "Error";
    // }

    // string line;

    // while(!file.eof()){
    //     getline(file,line);
    //     cout << line << endl;
    // }

    // file.close();

    ofstream file("test.txt", ios::app);

    if(!file){
        cout << "Error";
        return -1;
    }

    file << "A" << endl;
    file << "B" << endl;
    file << "C" << endl;
    file.close();
}