#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void func(int n)
    {
        cout << "SINGLE " << n << endl;
    }
};

class B : public A
{
};

int main()
{
    B a;
    a.func(2);

    return 0;
}