#include <stdio.h>

int main() {
    char str[100], temp;
    int i = 0, j;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string
    while (str[i] != '\0') {
        i++;
    }

    // Reverse the string
    for (j = 0; j < i / 2; j++) {
        temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }

    printf("Reversed string = %s\n", str);

    return 0;
}