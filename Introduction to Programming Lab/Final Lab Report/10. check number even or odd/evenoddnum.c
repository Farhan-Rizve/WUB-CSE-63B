#include <stdio.h>
int main()
{
    //variable
    int num;

    //user input
    printf("Enter a number :");
    scanf("%d", &num);

    //even odd
    if(num % 2 == 0){
        printf("This %d is a even number", num);
    }
    else{
        printf("This %d is a odd number", num);
    }

    return 0;

}
