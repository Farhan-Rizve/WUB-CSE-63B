#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    float sum = 0, avg;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("The average of the array elements is %.2f", avg);

    return 0;
}
