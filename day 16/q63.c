#include <stdio.h>

int main() {
    int arr[100], n, i, j, sum, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the required sum: ");
    scanf("%d", &sum);
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
                break;
            }
        }
        if(found)
            break;
    }
     if(found == 0) {
        printf("No pair found.\n");
    }
    return 0;
}