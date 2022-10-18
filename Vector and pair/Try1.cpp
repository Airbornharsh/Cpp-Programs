#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    a.push_back(7);
    a.push_back(69);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    vector<int>::iterator v;
    for (v = a.begin(); v != a.end(); v++)
    {
        cout << *v << endl;
    }

    for (auto element : a)
    {
        cout << element << endl;
    }

    a.pop_back();

    for (auto element : a)
    {
        cout << element << endl;
    }

    vector<int> b(2, 69);

    for (auto element : b)
    {
        cout << element << endl;
    }

    swap(a, b);
    return 0;
}