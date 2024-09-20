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

    // ofstream file("test.txt", ios::app);

    // if(!file){
    //     cout << "Error";
    //     return -1;
    // }

    // file << "A" << endl;
    // file << "B" << endl;
    // file << "C" << endl;
    // file.close();

    //write a file
    // fstream file("test1.txt",ios::out);

    // if(file){
    //     file << "testing with line 1" << endl;
    //     file.close();;
    // }
    // else{
    //     cout << "Error in opening file" << endl;
    //     return -1;
    // }

    // read from the file
    // string line;
    // file.open("test1.txt",ios::in);
    // if(file){
    //     while(!file.eof()){
    //         getline(file,line);
    //         cout << "Read : " << line << endl;
    //     }
    // }
    // else{
    //     cout << "Error in opening file" << endl;
    // }

    //append 
    // file.open("test1.txt",ios::app);
    // if(file){
    //     file << "testing with line 2" << endl;
    //     file.close();
    // }
    // else{
    //     cout << "Error in opening file" << endl;
    //     return -1;
    // }
    

    char name[50] = "Hello";
    int age=10;

    ofstream file("binary.txt",ios::binary);

    file.write(name,sizeof(name));
    file.write(reinterpret_cast <char*> (&age),sizeof(age)); 

    file.close();

    char name2[50];

    ifstream file2("binary",ios::binary);
    file2.read(name2,sizeof(name2));
    cout << "Name: " << name2;
    file2.close();

}