#include <bits/stdc++.h>
using namespace std;
class hero
{

private:
    int health;
    char level;

public:
    hero()
    {
        cout << "constructor called" << endl;

    }

    // constructor overloading
    hero(int health)
    {
        cout << "constructor called" << endl;
        this->health = health;
        // this keyword stores the adress of corresponding object.
    }

    int get_health()
    {
        return health;
    }
};

int main()
{

    hero h1;
    // hero h2(5);

    // cout << h2.get_health() << endl;

    return 0;
}