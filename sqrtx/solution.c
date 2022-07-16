#include <limits.h>

static int max(int a, int b)
{
    return a > b ? a : b;
}

int mySqrt(int x)
{
    long int root = 0;
    int step = INT_MAX >> 16;

    do
    {
        long int r1 = root * root;
        long int r2 = (root + 1) * (root + 1);

        if (r1 <= x && x < r2)
        {
            break;
        }

        if (r1 > x)
        {
            root -= step;
        }
        else
        {
            root += step;
        }

        step = max(step / 2, 1);
    }
    while (1);

    return (int)root;
}
