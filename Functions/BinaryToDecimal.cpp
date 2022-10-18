#include <iostream>
#include <math.h>
using namespace std;

double Decimal(int n)
{
    double sum = 0;
    int i = 0;
    while (n > 0)
    {
        int check = n % 10;
        if (check == 1 || check == 0)
        {
            sum += (check * pow(2, i));
            n = n / 10;
            i++;
        }
        else
        {
            cout << "Please Enter A Valid Binary Number";
            return 0;
            break;
        }
    }
    return sum;
}

int main()
{
    int a;
    cout << "Enter a Binary Number\n";
    cin >> a;
    if (Decimal(a) != 0)
    {
        cout << "Decimal Number is " << Decimal(a);
    }
    return 0;
}