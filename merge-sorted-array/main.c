#include <stdlib.h>
#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n);

int main()
{
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int nums2[] = {2, 5, 6};

    merge(nums1, 6, 3, nums2, 3, 3);

    for (size_t i = 0; i < 6; i += 1)
    {
        printf("%d\n", nums1[i]);
    }

    return EXIT_SUCCESS;
}
