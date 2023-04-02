#include <stdio.h>

int main()
{
    //variable
    int n;

    //user input
    printf("Enter number for table : ");
    scanf("%d", &n);

    //generate table
    for(int i = 1; i <= 10; i++){
        printf("\n%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}
