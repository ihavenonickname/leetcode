#include <stdlib.h>
#include <stdio.h>

int mySqrt(int x);

int main()
{
    int xs[] = {0, 1, 2, 3, 4, 5, 9, 10, 11, 99, 100, 101, 2147395600, 2147483647};
    int ans[] = {0, 1, 1, 1, 2, 2, 3, 3, 3, 9, 10, 10, 46340, 46340};

    for (int i = 0; i < sizeof(xs)/sizeof(int); i += 1)
    {
        int actual = mySqrt(xs[i]);

        printf("sqrt(%d): expected %d, got %d %s\n", xs[i], ans[i], actual, actual == ans[i] ? "✔️" : "❌");
    }

    return EXIT_SUCCESS;
}
