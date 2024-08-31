#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int roll_no;
    student(){
        cout << "this is the default constructor";
    }

    student(string na,int a, int r){
        "this will print all the student details";
        name=na;
        age=a;
        roll_no=r;
    }

    student (student &r1){
        name=r1.name;
    }

    ~student(){
        cout << "destructor" << endl;
    }

    void print_details(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
    }
};
int main(){
    string name;
    int age;
    int roll_no;
    cout << "Enter name: ";
    getline(cin,name);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter roll no: ";
    cin >> roll_no;
    student s1(name,age,roll_no);
    s1.print_details();
    student s2(s1);
    cout << s2.name << endl;
}