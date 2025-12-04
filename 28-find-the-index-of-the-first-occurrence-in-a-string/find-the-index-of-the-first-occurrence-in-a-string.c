int strStr(char* haystack, char* needle) {
    if (needle[0] == '\0') 
        return 0;   // empty needle

    int i = 0, j = 0;   // i → haystack, j → needle

    while (haystack[i] != '\0') {

        // If first characters match, start checking the entire needle
        if (haystack[i] == needle[0]) {

            int start = i;  // possible match index
            j = 0;

            // compare needle with haystack from this position
            while (haystack[i + j] != '\0' && needle[j] != '\0' &&
                   haystack[i + j] == needle[j]) {
                j++;
            }

            // entire needle matched
            if (needle[j] == '\0')  
                return start;
        }

        i++;   // ← move to next character in haystack
    }

    return -1;  // not found
}

