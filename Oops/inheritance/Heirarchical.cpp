#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void func(string n)
    {
        cout << "HEIRARCHICAL From " << n << endl;
    }
};
class B : public A
{
public:
};

class C : public A
{
public:
};

class D : public A
{
public:
};

int main()
{
    B b;
    C c;
    D d;
    b.func("b");
    c.func("c");
    d.func("d");

    return 0;
}