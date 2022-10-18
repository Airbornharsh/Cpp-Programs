#include <stdio.h>
int main()
{
    int x, y;
    x = 2;
    y = ++x * ++x;
    printf("%d%d", x, y);
    x = 2;
    y = x++ * ++x;
    printf("%d%d", x, y);
    return 0;
}