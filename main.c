#include <stdio.h>

int sumTwo(int a, int b)
{
    return a + b;
}

int square(int n)
{
    return n * n;
}

int get_max(int x, int y)
{
    if (x>y)
        return x;
    else
        return y;
}

int main(void)
{
    printf("%i\n", sumTwo(3, 78));
    printf("%i\n", square(10));
    printf("%i\n", get_max(7, 23));
    return 0;
}