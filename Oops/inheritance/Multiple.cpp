#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void afunc(int n)
    {
        cout << "MULTIPLE From A " << n << endl;
    }
};
class B
{
public:
    int a;
    void bfunc(int n)
    {
        cout << "MULTIPLE From B " << n << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C c;
    c.afunc(2);
    c.bfunc(2);

    return 0;
}