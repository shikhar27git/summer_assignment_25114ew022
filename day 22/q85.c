#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string
    while (str[i] != '\0') {
        i++;
    }

    // Check palindrome
    for (j = 0; j < i / 2; j++) {
        if (str[j] != str[i - j - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome String\n");
    else
        printf("Not a Palindrome String\n");

    return 0;
}