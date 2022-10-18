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
        if (check == 9 || check == 8)
        {
            cout << "Please Enter A Valid Octa Number";
            return 0;
            break;
        }
        else
        {
            sum += (check * pow(8, i));
            n = n / 10;
            i++;
        }
    }
    return sum;
}

int main()
{
    int a;
    cout << "Enter a Octa Number\n";
    cin >> a;
    double k = Decimal(a);
    if (k != 0)
    {
        cout << "Decimal Number is " << k;
    }
    return 0;
}