#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void afunc(int n)
    {
        cout << "HYBRID From A " << n << endl;
    }
};
class B : public A
{
public:
    int a;
    void bfunc(int n)
    {
        cout << "HYBRID From B " << n << endl;
    }
};

class C
{
public:
    int a;
    void cfunc(int n)
    {
        cout << "HYBRID From C " << n << endl;
    }
};

class D : public B, public C
{
public:
};

int main()
{
    D d;
    d.afunc(2);
    d.bfunc(2);
    d.cfunc(2);

    return 0;
}