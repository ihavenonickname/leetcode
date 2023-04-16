#include <stdlib.h>
#include <string.h>

int **generate(int numRows, int *returnSize, int **returnColumnSizes)
{
    int **ret = malloc((size_t)numRows * sizeof(int *));
    *returnColumnSizes = malloc((size_t)numRows * sizeof(int));
    *returnSize = numRows;

    for (size_t i = 0; i < numRows; i += 1)
    {
        size_t size = i + 1;
        (*returnColumnSizes)[i] = (int)size;
        ret[i] = malloc((size_t)size * sizeof(int));
        ret[i][0] = 1;
        ret[i][i] = 1;

        for (size_t j = 1; j < i; j += 1)
        {
            ret[i][j] = ret[i - 1][j - 1] + ret[i - 1][j];
        }
    }

    return ret;
}
