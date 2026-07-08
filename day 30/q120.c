#include <stdio.h>
#include <string.h>

#define MAX 50

int roll[MAX];
char name[MAX][50];
float marks[MAX];
int n = 0;

// Function to add students
void addStudent() {
    int i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }
}

// Function to display students
void displayStudent() {
    int i;

    if(n == 0) {
        printf("\nNo records available.\n");
        return;
    }

    printf("\n----- Student Records -----\n");
    printf("Roll No\tName\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }
}

// Function to search student
void searchStudent() {
    int i, r, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &r);

    for(i = 0; i < n; i++) {
        if(roll[i] == r) {
            printf("\nStudent Found\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Students\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}