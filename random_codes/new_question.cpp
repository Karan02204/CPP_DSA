#include <iostream>
using namespace std;
class Add{
    public:
    int a=0;
    int b=5;
    Add(){
    }
    Add(int a){
        this->a = a;
    }
    void add(){
        int addition = a +b;
        cout << addition << endl;
    }
};
int main()
{
    int choice,a;
    cin >> choice;
    Add ad;
    if(choice ==1){
        ad = Add();
        ad.add();
    }
    else if (choice ==2){
        cin >>a;
        ad = Add(a);
        ad.add();
    }
}