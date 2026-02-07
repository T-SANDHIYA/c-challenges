#include <limits.h>

int thirdMax(int* nums, int n) {
    long first = LONG_MIN;
    long second = LONG_MIN;
    long third = LONG_MIN;

    for (int i = 0; i < n; i++) {
        int x = nums[i];

        // Skip duplicates
        if (x == first || x == second || x == third)
            continue;

        if (x > first) {
            third = second;
            second = first;
            first = x;
        } 
        else if (x > second) {
            third = second;
            second = x;
        } 
        else if (x > third) {
            third = x;
        }
    }

    // If third doesn't exist, return max
    return (third == LONG_MIN) ? first : third;
}
