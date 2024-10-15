#include <iostream>
#include <vector>
using namespace std;

template <class T>
class PlayStats{
    private:
    T stats;

    public:
    PlayStats(T initStats){
        stats = initStats;
    }

    T getStats(){
        return stats;
    }

    void setStats(T val){
        stats+= val;
    }

    void displayStats(){
        cout << "Stats: " << stats << endl;
    }
};


template <typename T>
void displayInventory(vector<T> &items){
    for(T i : items){
        cout << i << " ";
    }
}
int main()
{
    vector<int> coins = {10,20,30};
    vector<string> weapon = {"Sword" , "Bow"};
    vector<float> elixer = {1.5,2.5};

    displayInventory(coins);
    displayInventory(weapon);
    displayInventory(elixer);

    PlayStats<int> health(100);
    health.setStats(50);
    health.displayStats();
}