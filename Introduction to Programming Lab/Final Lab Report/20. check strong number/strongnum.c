#include <stdio.h>

int main() {
    int num, originalNum, remainder, i, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        remainder = num % 10;
        fact = 1;
        for (i = 1; i <= remainder; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%d is a strong number.", originalNum);
    } else {
        printf("%d is not a strong number.", originalNum);
    }

    return 0;
}

