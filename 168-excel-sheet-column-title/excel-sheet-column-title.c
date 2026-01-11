char* convertToTitle(int columnNumber) {
    static char result[20];
    int index = 0;

    while (columnNumber > 0) {
        columnNumber--;                     // VERY important
        int rem = columnNumber % 26;
        result[index++] = 'A' + rem;
        columnNumber /= 26;
    }

    result[index] = '\0';

    // reverse string
    for (int i = 0; i < index / 2; i++) {
        char temp = result[i];
        result[i] = result[index - i - 1];
        result[index - i - 1] = temp;
    }

    return result;
}

    