#include <stdlib.h>
#include <stdio.h>

int* plusOne(int* digits, int digitsSize, int* returnSize);

int main()
{
    int returnSize;
    int digits[] = {9};
    int digitsSize = sizeof(digits)/sizeof(int);

    printf("%d\n", digitsSize);

    int* returnArr = plusOne(digits, digitsSize, &returnSize);

    for (int i = 0; i < returnSize; i += 1)
    {
        printf("%d", returnArr[i]);
    }

    printf("\n");

    free(returnArr);

    return EXIT_SUCCESS;
}
