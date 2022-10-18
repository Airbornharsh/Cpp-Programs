#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void afunc(int n)
    {
        cout << "MULTILEVEL From A " << n << endl;
    }
};
class B :public A
{
public:
    int a;
    void bfunc(int n)
    {
        cout << "MULTILEVEL From B " << n << endl;
    }
};

class C : public B 
{
};

int main()
{
    C c;
    c.afunc(2);
    c.bfunc(2);

    return 0;
}