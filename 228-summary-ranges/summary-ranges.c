#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** summaryRanges(int* nums, int n, int* returnSize) {
    if (n == 0) {
        *returnSize = 0;
        return NULL;
    }

    char** result = (char**)malloc(n * sizeof(char*));
    int k = 0;
    int i = 0;

    while (i < n) {
        int start = nums[i];
        int j = i;

        // check consecutive elements
        while (j + 1 < n && nums[j + 1] == nums[j] + 1) {
            j++;
        }

        // allocate string
        result[k] = (char*)malloc(25 * sizeof(char));

        if (start == nums[j]) {
            sprintf(result[k], "%d", start);
        } else {
            sprintf(result[k], "%d->%d", start, nums[j]);
        }

        k++;
        i = j + 1;
    }

    *returnSize = k;
    return result;
}
