#include <iostream>
using namespace std;

int func(int a)
{
    cout << "First " << a << endl;
    return 0;
}

int func(int a, int b)
{
    cout << "Second " << a << " "
         << "and " << b << endl;

    return 0;
}

int main()
{
    func(1);
    func(1, 2);
    return 0;
}