#include <iostream>
using namespace std;

enum heroes
{
    harsh,
    ironman,
    spiderman
};

int main()
{

    heroes a;
    a = harsh;
    cout << a + 1 << endl;
    a = ironman;
    cout << a + 1 << endl;

    return 0;
}