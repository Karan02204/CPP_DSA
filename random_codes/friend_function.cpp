// friend functions allow us to access the private members of another class
#include <iostream>
using namespace std;

// class Distance{
//     private:
//     int meter;

//     public:
//     Distance(){
//         this->meter=10;
//     }

//     friend int increaseDistance(Distance);
// };

// int increaseDistance(Distance d1){
//     d1.meter += 20;
// }
// int main(){
//     Distance d;
//     cout << increaseDistance(d);
    
// }
class ClassB;
class ClassA{
    private:
    int numA;

    public:
    ClassA(){
        this->numA=5;
    }

    friend int add(ClassA,ClassB);
};

class ClassB{
    private:
    int numB;

    public:
    ClassB(){
        this->numB=10;
    }

    friend int add(ClassA,ClassB);
};

int add(ClassA objA,ClassB objB){
    return objA.numA + objB.numB;
}

#include <iostream>
using namespace std;

int main(){
    ClassA objA;
    ClassB objB;
    cout << add(objA,objB);
return 0;
}