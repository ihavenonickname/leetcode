#include <stdlib.h>
#include <stdio.h>

int **generate(int numRows, int *returnSize, int **returnColumnSizes);

int main()
{
    int *returnColumnSizes;
    int returnSize;

    int **rows = generate(6, &returnSize, &returnColumnSizes);

    for (size_t i = 0; i < returnSize; i += 1)
    {
        for (size_t j = 0; j < returnColumnSizes[i]; j += 1)
        {
            printf("%d ", rows[i][j]);
        }

        free(rows[i]);

        printf("\n");
    }

    free(rows);

    return EXIT_SUCCESS;
}
