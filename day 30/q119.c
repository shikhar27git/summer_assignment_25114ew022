#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    int n, i, id[MAX], search, found = 0;
    char name[MAX][50];
    float salary[MAX];

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &id[i]);

        printf("Employee Name: ");
        scanf("%s", name[i]);

        printf("Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display all employee records
    printf("\n----- Employee Records -----\n");
    printf("ID\tName\tSalary\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", id[i], name[i], salary[i]);
    }

    // Search employee by ID
    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(id[i] == search) {
            printf("\nEmployee Found!\n");
            printf("ID     : %d\n", id[i]);
            printf("Name   : %s\n", name[i]);
            printf("Salary : %.2f\n", salary[i]);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("\nEmployee not found.\n");
    }

    return 0;
}