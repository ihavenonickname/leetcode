#include <stdlib.h>
#include <string.h>

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    int i = digitsSize - 1;

    while (i >= 0 && digits[i] == 9)
    {
        i -= 1;
    }

    int* returnArr;

    if (i == -1)
    {
        returnArr = calloc((size_t)digitsSize + 1, sizeof(int));
        returnArr[0] = 1;
        *returnSize = digitsSize + 1;
    }
    else
    {
        returnArr = calloc((size_t)digitsSize, sizeof(int));
        memcpy(returnArr, digits, ((size_t)i + 1) * sizeof(int));
        returnArr[i] += 1;
        *returnSize = digitsSize;
    }

    return returnArr;
}
