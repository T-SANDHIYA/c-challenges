#include <stdlib.h>

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * numsSize);
    int* freq = (int*)calloc(numsSize, sizeof(int));  // auto initialize to 0
    int k = 0;

    // Count frequency
    for (int i = 0; i < numsSize; i++) {
        freq[nums[i] - 1]++;
    }

    // Find missing numbers
    for (int i = 0; i < numsSize; i++) {
        if (freq[i] == 0) {
            result[k++] = i + 1;
        }
    }

    *returnSize = k;

    free(freq);
    return result;
}
