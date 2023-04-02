#include <stdio.h>

int main()
{
    //variable
    int n, fractorial = 1;

    //user input
    printf("Enter a number : ");
    scanf("%d", &n);

    //calculate fractorial
    for(int i = 1; i <= n; i++){
        fractorial *= i;
    }

    printf("Fractorial of %d is %d", n, fractorial);

    return 0;
}
