#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0};
    int i, max = 0;
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Find maximum occurring character
    for (i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] > max) {
            max = count[(unsigned char)str[i]];
            ch = str[i];
        }
    }

    printf("Maximum occurring character: %c\n", ch);
    printf("Frequency: %d\n", max);

    return 0;
}