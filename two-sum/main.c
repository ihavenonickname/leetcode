#include <stdlib.h>
#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main()
{
    int nums[] = {0, 4, 3, 0};
    int target = 0;
    int returnSize = -1;

    int* returnArr = twoSum(nums, sizeof(nums)/sizeof(int), target, &returnSize);

    printf("#%d: %d %d\n", returnSize, returnArr[0], returnArr[1]);

    free(returnArr);

    return EXIT_SUCCESS;
}
