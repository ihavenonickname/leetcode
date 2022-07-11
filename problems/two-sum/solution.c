#include <stdlib.h>
#include <string.h>

int cmpFunc(const void * elem1, const void * elem2)
{
    return *((int*)elem1) - *((int*)elem2);
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    size_t length = (size_t)numsSize;

    int* sortedNums = calloc(length, sizeof(int));

    memcpy(sortedNums, nums, sizeof(int) * length);

    qsort(sortedNums, length, sizeof(int), cmpFunc);

    int fst;
    int snd;

    for (size_t i = length - 1; i >= 1; i -= 1)
    {
        fst = sortedNums[i];
        snd = target - fst;

        int* elem = (int*)bsearch(&snd, sortedNums, i, sizeof(int), cmpFunc);

        if (elem != NULL)
        {
           break;
        }
    }

    *returnSize = 2;
    int* res = calloc(2, sizeof(int));

    for (size_t i = length - 1; i >= 0; i -= 1)
    {
        if (nums[i] == fst)
        {
            res[0] = (int)i;

            break;
        }
    }

    for (size_t i = 0; i < length; i += 1)
    {
        if (nums[i] == snd)
        {
            res[1] = (int)i;

            break;
        }
    }

    return res;
}
