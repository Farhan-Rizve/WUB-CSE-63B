#include <stdio.h>

int main() {
    int arr[100];
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array in reverse order is: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

