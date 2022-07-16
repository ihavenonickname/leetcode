#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char ** strs, int strsSize);

int main()
{
    char** strs = calloc(3, sizeof(char*));

    strs[0] = calloc(100, sizeof(char));
    strs[1] = calloc(100, sizeof(char));
    strs[2] = calloc(100, sizeof(char));

    memcpy(strs[0], "flow", 4);
    memcpy(strs[1], "flight", 6);
    memcpy(strs[2], "reflower", 8);

    char* res = longestCommonPrefix(strs, 3);

    printf("res: \"%s\"\n", res);

    // free(res);

    free(strs[0]);
    free(strs[1]);
    free(strs[2]);
    free(strs);

    return EXIT_SUCCESS;
}
