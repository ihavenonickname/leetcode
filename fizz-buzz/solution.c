#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char** fizzBuzz(int n, int *returnSize)
{
    char** returnArr = calloc((size_t)n + 15, sizeof(char*));

    *returnSize = n;

    for (int i = 0; i < n; i += 15)
    {
        sprintf(returnArr[i+0] = calloc(6, sizeof(char)), "%d", i+1);
        sprintf(returnArr[i+1] = calloc(6, sizeof(char)), "%d", i+2);
        returnArr[i+2] = "Fizz";
        sprintf(returnArr[i+3] = calloc(6, sizeof(char)), "%d", i+4);
        returnArr[i+4] = "Buzz";
        returnArr[i+5] = "Fizz";
        sprintf(returnArr[i+6] = calloc(6, sizeof(char)), "%d", i+7);
        sprintf(returnArr[i+7] = calloc(6, sizeof(char)), "%d", i+8);
        returnArr[i+8] = "Fizz";
        returnArr[i+9] = "Buzz";
        sprintf(returnArr[i+10] = calloc(6, sizeof(char)), "%d", i+11);
        returnArr[i+11] = "Fizz";
        sprintf(returnArr[i+12] = calloc(6, sizeof(char)), "%d", i+13);
        sprintf(returnArr[i+13] = calloc(6, sizeof(char)), "%d", i+14);
        returnArr[i+14] = "FizzBuzz";
    }

    return returnArr;
}
