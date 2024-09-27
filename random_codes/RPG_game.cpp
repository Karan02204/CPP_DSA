#include <iostream>
using namespace std;
class Character{
    private:
    string name;
    string type;
    int health;
    int attackPower;
    int defensePower;
    int magicPower;

    public:
    Character(){
        name = "Unnamed";
        type = "Unknown";
        health = 100;
        attackPower = 0;
        defensePower = 0;
        magicPower = 0;
    }

    Character(string name , string type , int health , int attackPower , int defensePower , int magicPower = 0){
        this->name = name;
        this->type = type;
        this->health = health;
        this->attackPower = attackPower;
        this->defensePower = defensePower;
        if(type == "Mage"){
            this->magicPower = magicPower;
        }
    }

    void setName(string name){
        this->name = name;
    }

    string getName(){
        return this->name;
    }

    void setType(string Type){
        this->type = Type;
    }

    string getType(){
        return this->type;
    }

    void setHealth(int health){
        if(health > 0 && health < 100){
            this->health = health;
        }
        else{
            cout << "Health cannot be less than 0." << endl;
            this->health = 0;
        }
    }

    int getHealth(){
        return this->health;
    }

    void setattackPower(int attackPower){
        if(attackPower > 0 && attackPower < 100){
            this->attackPower = attackPower;
        }
        else{
            cout << "Attack Power cannot be less than 0." << endl;
        }
    }

    int getattackPower(){
        return this->attackPower;
    }

    void setdefensePower(int defensePower){
        if(defensePower > 0 && defensePower < 100){
            this->defensePower = defensePower;
        }
        else{
            cout << "Defense Power cannot be less than 0." << endl;
        }
    }

    int getdefensePower(){
        return this->defensePower;
    }

    void setmagicPower(int magicPower){
        if(magicPower > 0 && magicPower < 100){
            this->magicPower = magicPower;
        }
        else{
            cout << "Magic Power cannot be less than 0." << endl;
        }
    }

    int getmagicPower(){
        return this->magicPower;
    }

    void attack(Character character){
        cout << "Attacking with " << this->attackPower << " power on " << endl;
        setHealth(health-20);
        getHealth();
    }

    void defend(){
        cout << "Defending with " << this->defensePower << " power." << endl;
        setHealth(health-10);
        getHealth();
    }

    void useMagic(){
        cout << "Using magic with " << this->magicPower << " power." << endl;
        setHealth(health-30);
        getHealth();
    }


};

int main()
{
    Character c1("Soul","Mage",100,70,60,50);
    Character c2("Star","Warrior",100,60,70);
    c1.attack(c2);
}