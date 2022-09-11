#include <stdlib.h>
#include <stdio.h>

char** fizzBuzz(int n, int* returnSize);

int main()
{
    int returnSize;
    char** returnArr = fizzBuzz(20, &returnSize);

    for (size_t i = 0; i < returnSize; i += 1)
    {
        printf("%s\n", returnArr[i]);
    }

    free(returnArr);

    return EXIT_SUCCESS;
}
