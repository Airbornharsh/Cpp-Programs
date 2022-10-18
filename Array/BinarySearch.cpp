#include <iostream>
using namespace std;

int BinarySearch(int array[], int n)
{
    int min, max, mid;
    min = 0;
    max = 9;
    int l = 10;
    while (array[mid] != n)
    {
        mid = (min + max) / 2;
        if (n > array[mid])
        {
            min = mid;
        }
        else if (n < array[mid])
        {
            max = mid;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int array[10] = {4, 5, 9, 13, 23, 35, 56, 78, 90, 108}, n;

    cout << "Enter a Number To search \n";
    cin >> n;

    cout << BinarySearch(array, n);
    return 0;
}