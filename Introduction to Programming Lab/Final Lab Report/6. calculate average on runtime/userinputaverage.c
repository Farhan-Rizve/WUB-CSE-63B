#include <stdio.h>
int main()
{
    //variables
    int a,b,c;

    //user input
    printf("Enter Number of A : ");
    scanf("%d", &a);
    printf("Enter Number of B : ");
    scanf("%d", &b);
    printf("Enter Number of C : ");
    scanf("%d", &c);

    //operation
    float sum = (a+b+c)/3;

    printf("\nAverage is %.2f", sum);

    return 0;
}
