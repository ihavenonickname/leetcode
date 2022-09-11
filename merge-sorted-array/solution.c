#include <stdlib.h>
#include <string.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    int p1 = m - 1;
    int p2 = n - 1;
    size_t i = (size_t)(m + n - 1);

    while (p1 >= 0 && p2 >= 0)
    {
        if (nums1[p1] > nums2[p2])
        {
            nums1[i] = nums1[p1];
            p1 -= 1;
        }
        else
        {
            nums1[i] = nums2[p2];
            p2 -= 1;
        }

        i -= 1;
    }

    if (p2 >= 0)
    {
        memcpy(nums1, nums2, (size_t)(p2 + 1) * sizeof(int));
    }
}
