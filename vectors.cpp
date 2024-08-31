#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector <int> vec1={1,2,3,4,5};
    vec1.at(4)=6;
    for (int i : vec1){
        cout << i << " ";
    }

}