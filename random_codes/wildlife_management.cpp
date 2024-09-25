#include <iostream>
using namespace std;

class Animal{
    protected:
    string species;
    int age;
    float weight;

    public:
    Animal(){
        species = "Unknown";
        age = 0;
        weight = 0.0f;
    }
    Animal(string species , int age , float weight){
        this->species = species;
        this->age = age;
        this->weight = weight;
    }

    void DisplayInfo(){
        cout << "Species : " << species;
        cout << "Age : " << age;
        cout << "Weight : " << weight;
    }
};

class Mammal:public Animal {
    protected:
    string furcolor;

    public:
    Mammal(){
        species = "Unknown";
        age = 0;
        weight = 0.0f;
        furcolor = "Unknown";
    }
    Mammal(string species , int age , float weight , string furcolor){
        this->species = species;
        this->age = age;
        this->weight = weight;
        this->furcolor = furcolor;
    }

    void makesound(){
        cout << species << "makes the sound"<<endl;
    }
};


class Birds:public Animal {
    protected:
    float wingspan;

    public:
    Birds(string species , int age , float weight , float wingspan){
        this->species = species;
        this->age = age;
        this->weight = weight;
        this->wingspan = wingspan;
    }

    void fly(){
        cout << species << "is flying with a wingspan of " << wingspan << "meters"<<endl;
    }
};


class Reptile:public Animal {
    protected:
    bool isVenomous;

    public:
    Reptile(string species , int age , float weight , bool isVenomous){
        this->species = species;
        this->age = age;
        this->weight = weight;
        this->isVenomous = isVenomous;
    }

    void Crawl(){
        cout << species << "is crawling" << endl;
    }
};

class Lion:public Mammal{
    private:
    int prideSize;

    public:
    Lion(string species , int age , float weight , int prideSize){
        this->species = species;
        this->age = age;
        this->weight = weight;
        this->prideSize = prideSize;

    }
    void hunt() {
        cout << species << " hunts with its pride of " << prideSize << " members" << endl;
    }
};


class Elephant:public Mammal{
    private:
    float trunkLength;

    public:
    Elephant(string species , int age , float weight , float trunkLength){
        this->species = species;
        this->age = age;
        this->weight = weight;
        this->trunkLength= trunkLength;

    }
    void useTrunk() {
        cout << species << " uses its trunk to drink water" << endl;
    }
};

// class FylingReptile:public Birds , Reptile{
//     FylingReptile(string species , int age , float weight , bool isVenomous, float wingspan){
//         this->Animal::species = species;
//         this->age = age;
//         this->weight = weight;
//         this->isVenomous = isVenomous;
//         this->wingspan = wingspan;
//     }
// };

int main()
{

}