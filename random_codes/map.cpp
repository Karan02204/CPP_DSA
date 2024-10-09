#include <iostream>
#include <map>
using namespace std;

int main()
{
    //map<int,string> students = {{1,"Karan"},{2,"Archita"},{3,"Vishal"}};

    map<int,string> students;

    students[1] = "Karan";
    students[2] = "Archita";

    students.insert(make_pair(3,"Vishal"));

    // for(int i=1 ; i < students.size();i++){
    //     cout<<"Students[" << i << "] : " << students[i]<< endl;
    // }

    map<int , string>::iterator iter;

    for(iter = students.begin();iter!= students.end();iter++){
        cout<< iter->first << " -> " << iter -> second << endl;
    }

    students.find(2);
}