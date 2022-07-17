int removeDuplicates(int* nums, int numsSize)
{
    int lastIndex = 0;

    for (int i = 1; i < numsSize; i += 1)
    {
        if (nums[lastIndex] != nums[i])
        {
            lastIndex += 1;
            nums[lastIndex] = nums[i];
        }
    }

    return lastIndex + 1;
}
