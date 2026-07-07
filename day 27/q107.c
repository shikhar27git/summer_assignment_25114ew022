#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, net;
};

int main() {
    struct Employee e;
    
    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &e.basic);

    // Calculate HRA and DA
    e.hra = e.basic * 0.20;
    e.da = e.basic * 0.10;

    // Calculate Net Salary
    e.net = e.basic + e.hra + e.da;

    printf("\n--- Salary Details ---\n");
    printf("Employee ID   : %d\n", e.id);
    printf("Employee Name : %s\n", e.name);
    printf("Basic Salary  : %.2f\n", e.basic);
    printf("HRA           : %.2f\n", e.hra);
    printf("DA            : %.2f\n", e.da);
    printf("Net Salary    : %.2f\n", e.net);

    return 0;
}