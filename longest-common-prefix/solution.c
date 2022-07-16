#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpFunc(const void* elem1, const void* elem2)
{
    return strcmp(*((char**)elem1), *((char**)elem2));
}

char* longestCommonPrefix(char** strs, int strsSize)
{
    qsort(strs, (size_t)strsSize, sizeof(char*), cmpFunc);

    size_t len = 0;
    size_t lastIndex = (size_t)strsSize - 1;

    while (strs[0][len] && strs[0][len] == strs[lastIndex][len])
    {
        len += 1;
    }

    strs[0][len] = '\0';

    return strs[0];
}
