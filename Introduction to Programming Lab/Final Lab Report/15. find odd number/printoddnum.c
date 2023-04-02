#include <stdio.h>

int main()
{
    //variable
    int n;

    //user input
    printf("Enter a positive integer n : ");
    scanf("%d", &n);

    //loop for find odd
    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            printf("%d ", i);
        }
    }

    return 0;
}
