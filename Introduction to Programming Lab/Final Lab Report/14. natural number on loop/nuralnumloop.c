#include <stdio.h>
int main()
{
    //variable
    int n, sum=0;

    //user input
    printf("Enter a positive integer n : ");
    scanf("%d", &n);

    //loop
    for(int i = 1; i <= n; i++){
        sum += i;
    }

    // output
    printf("The sum of first natural n = %d is %d", n, sum);

    return 0;
}
