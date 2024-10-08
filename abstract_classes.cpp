#include <iostream> // abstract classe consist of pure virtual function
using namespace std;

class BasePiece{
    public:
    virtual void move() = 0; // pure virtual function
};

class King: public BasePiece{
    void move() override {
        cout << "King Moves 1 step" << endl;
    }
};

class Queen: public BasePiece{

};

class Rook: public BasePiece{

};

class Knight: public BasePiece{

};

int main()
{
    BasePiece *bp = new King();
    bp->move();
}