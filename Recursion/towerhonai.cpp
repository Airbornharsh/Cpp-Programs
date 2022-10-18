#include <iostream>
using namespace std;

void tower(int n, char src, char dest, char helper)
{

    if (n == 0)
    {
        return;
    }

    tower(n - 1, src, helper, dest);
    cout << src << "to" << dest << "\n";
    tower(n - 1, helper, dest, src);

    return;
}

int main()
{
    tower(4, 'A', 'C', 'B');
    return 0;
}