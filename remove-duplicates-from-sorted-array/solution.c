int removeDuplicates(int* nums, int numsSize)
{
    int lastIndex = 0;

    for (int i = 1; i < numsSize; i += 1)
    {
        if (nums[lastIndex] != nums[i])
        {
            nums[lastIndex + 1] = nums[i];
            lastIndex += 1;
        }
    }

    return lastIndex + 1;
}
