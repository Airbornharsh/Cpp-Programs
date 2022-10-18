#include <iostream>
using namespace std;

class base
{
public:
    void virtual print()
    {
        cout << "printing base" << endl;
    }
    void display()
    {
        cout << "displaying base" << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "printing derived" << endl;
    }
    void display()
    {
        cout << "displaying derived" << endl;
    }
};

int main()
{
    base *ptr;
    derived a;
    ptr = &a;
    ptr->print();
    ptr->display();
    return 0;
}