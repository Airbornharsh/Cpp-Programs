#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char check;

    cin >> a >> b >> check;

    switch (check)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
        cout << "Use Add Substract Multiply or Division";
        break;
    }

    return 0;
}