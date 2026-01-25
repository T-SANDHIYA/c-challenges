#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Comparator function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int minimumDifference(int* nums, int numsSize, int k) {
    if (k == 1 || numsSize == 0)
        return 0;

    // Step 1: Sort the array
    qsort(nums, numsSize, sizeof(int), compare);

    int minDiff = INT_MAX;

    // Step 2: Sliding window of size k
    for (int i = 0; i <= numsSize - k; i++) {
        int diff = nums[i + k - 1] - nums[i];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    return minDiff;
}
