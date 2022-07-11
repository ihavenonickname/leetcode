#include <stdlib.h>
#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main()
{
    int nums[] = {3, 2, 10, 6, 19, 0, 1};
    int s = -1;

    int* res = twoSum(nums, 7, 29, &s);

    printf("#%d %d %d\n", s, res[0], res[1]);

    free(res);

    return EXIT_SUCCESS;
}
