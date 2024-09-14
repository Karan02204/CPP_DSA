#include <iostream>
using namespace std;

class car{
    private:
    string brandname;
    string model;
    string engine;
    int seats;

    public:

    car(){

    };
    car(string bName, string mdl, string eng, int seats) {
        brandname = bName;
        model = mdl;
        engine = eng;
        this->seats = seats;
    }

    void displayinfo(){
        cout<<"Brand Name: "<<brandname<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Engine: "<<engine<<endl;
        cout<<"Seats: "<<seats<<endl;
    }
};

int main()
{
    car c1("Toyota","Camry","v6",5);
    c1.displayinfo();
    return 0;
}