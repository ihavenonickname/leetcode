#include <stdlib.h>
#include <string.h>

struct elem
{
    int num;
    size_t idx;
};

int cmpFunc(const void * elem1, const void * elem2)
{
    return ((struct elem*)elem1)->num - ((struct elem*)elem2)->num;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    size_t length = (size_t)numsSize;

    struct elem sorted[length];

    for (size_t i = 0; i < length; i += 1)
    {
        sorted[i].num = nums[i];
        sorted[i].idx = i;
    }

    qsort(sorted, length, sizeof(struct elem), cmpFunc);

    int* res = calloc(2, sizeof(int));
    *returnSize = 2;

    for (size_t i = 1; i < length; i += 1)
    {
        int diff = target - sorted[i].num;

        struct elem* elem = bsearch(&diff, sorted, i, sizeof(struct elem), cmpFunc);

        if (elem != NULL)
        {
            res[0] = (int)sorted[i].idx;
            res[1] = (int)sorted[elem - sorted].idx;

            break;
        }
    }


    return res;
}
