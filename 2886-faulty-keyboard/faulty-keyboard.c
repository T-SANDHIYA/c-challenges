// Reverse first k characters of string
void reverse(char* str, int k) {
    int i = 0, j = k - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

char* finalString(char* s) {
    int n = strlen(s);

    // allocate enough memory
    char* result = (char*)malloc((n + 1) * sizeof(char));

    int k = 0;  // index for result

    for (int i = 0; i < n; i++) {
        if (s[i] == 'i') {
            reverse(result, k);   // reverse built part
        } else {
            result[k] = s[i];     // add character
            k++;
        }
    }

    result[k] = '\0';   // null terminate

    return result;
}