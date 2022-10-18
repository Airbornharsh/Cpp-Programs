#include <stdio.h>

int main()
{
    int i = 5;
    int a = --i + i++;
    printf("%d\n", a);
    i = 5;
    a = i-- + i++;
    printf("%d\n", a);
    i = 5;
    a = --i + ++i;
    printf("%d\n", a);
    i = 5;
    a = ++i + i--;
    printf("%d\n", a);
    return 0;
}
