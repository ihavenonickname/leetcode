#include <stdlib.h>
#include <stdio.h>

int removeDuplicates(int* nums, int numsSize);

int main()
{
    // int nums[] = {0, 1, 1, 2, 2, 2, 3, 3, 4, 5, 6, 6, 7, 7, 8, 8, 8, 9, 9};
    int nums[] = {1, 1, 2, 2, 2, 3, 4, 5, 6, 6};
    int numsSize = sizeof(nums) / sizeof(int);

    int numsSize2 = removeDuplicates(nums, numsSize);

    for (int i = 0; i < numsSize2; i+= 1)
    {
        printf("nums[%d] = %d\n", i, nums[i]);
    }

    printf("\n");

    for (int i = 0; i < numsSize; i+= 1)
    {
        printf("nums[%d] = %d\n", i, nums[i]);
    }

    return EXIT_SUCCESS;
}
