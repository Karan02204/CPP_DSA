#include <iostream>
using namespace std;
#include <map>

// Hasing is a technique used to map data to a fixed size table using a hash function
int main()
{
    map<int,string> students = {{1,"Karan"},{2,"Archita"}};
    students[1] =  "karan";
    students[3] = "vishal";

     students.insert(make_pair(4,"Kartavya"));
    // for(int i=1;i<=students.size();i++){
    //     cout << "Student[" << i << "]: " << students[i] << endl;
    // }

    //find 
    students.find(2);



    //iterator
    map<int,string>::iterator itr;
    for(itr=students.begin();itr!=students.end();itr++){
        cout << itr->first << " " << itr->second << endl;
    }
}