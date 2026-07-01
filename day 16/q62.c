#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int count, maxCount = 0, element;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
         if(count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }
     printf("Element with maximum frequency = %d\n", element);
    printf("Frequency = %d\n", maxCount);

    return 0;
}