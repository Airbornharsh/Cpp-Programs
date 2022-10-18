#include <iostream>
using namespace std;

struct Hero
{
    int No;
    string name;
    string ability;

    Hero()
    {
        cin >> this->No;
        cin >> this->name;
        cin >> this->ability;
    }

    void HeroOut()
    {
        cout << "Number " << this->No << endl;
        cout << this->name << " Ability is to " << this->ability << endl;
    }
};

int main()
{
    Hero a;
    a.HeroOut();
    return 0;
}