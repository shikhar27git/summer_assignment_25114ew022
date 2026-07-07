#include <stdio.h>

int main() {
    int choice, score = 0;

    printf("----- QUIZ APPLICATION -----\n");

    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);
    if (choice == 2)
        score++;

    printf("\n2. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);
    if (choice == 3)
        score++;

    printf("\n3. Which language is used for C programming?\n");
    printf("1. C\n2. Java\n3. Python\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);
    if (choice == 1)
        score++;

    printf("\n4. What is 10 + 20?\n");
    printf("1. 20\n2. 25\n3. 30\n4. 40\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);
    if (choice == 3)
        score++;

    printf("\n5. Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Mars\n3. Venus\n4. Jupiter\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);
    if (choice == 2)
        score++;

    printf("\nYour Score = %d/5\n", score);

    return 0;
}