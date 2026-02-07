#include <limits.h>

int maximumProduct(int* nums, int n) {
    // Initialize our "Big 5"
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        int val = nums[i];

        // Update 3 Largest
        if (val > max1) {
            max3 = max2;
            max2 = max1;
            max1 = val;
        } else if (val > max2) {
            max3 = max2;
            max2 = val;
        } else if (val > max3) {
            max3 = val;
        }

        // Update 2 Smallest
        if (val < min1) {
            min2 = min1;
            min1 = val;
        } else if (val < min2) {
            min2 = val;
        }
    }

    // Compare: (3 largest) vs (2 smallest + 1 largest)
    long long option1 = (long long)max1 * max2 * max3;
    long long option2 = (long long)max1 * min1 * min2;

    return (option1 > option2) ? (int)option1 : (int)option2;
}