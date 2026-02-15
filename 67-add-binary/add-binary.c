void reverse(char* str) {
    int n = strlen(str);
    int i;
    for (i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

// Function to add two binary strings
char* addBinary(char* a, char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);
    int max_len = (len_a > len_b) ? len_a : len_b;
    // Allocate memory for result (max_len + 1 for potential carry + 1 for null terminator)
    char* result = (char*)malloc((max_len + 2) * sizeof(char));
    if (result == NULL) {
        return NULL; // Handle memory allocation failure
    }

    int i = len_a - 1, j = len_b - 1, carry = 0, k = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        // Append current bit to result (in reverse order for now)
        result[k++] = (sum % 2) + '0';
        // Update carry
        carry = sum / 2;
    }

    result[k] = '\0'; // Null-terminate the string

    // Reverse the result to get the correct order
    reverse(result);

    return result;
}