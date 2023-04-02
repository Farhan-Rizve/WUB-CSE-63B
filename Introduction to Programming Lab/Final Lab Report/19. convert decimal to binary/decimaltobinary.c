#include <stdio.h>

int main()
{
    //variable
    int decimal, remainder, binary = 0, place = 1;

    //user input
    printf("Enter a decimal number : ");
    scanf("%d", &decimal);

    //convert decimal to binary
    while(decimal > 0){
        remainder = decimal % 2;
        binary += remainder * place;
        place *= 10;
        decimal /= 2;
    }
    printf("The decimal %d binary equ is %d", decimal, binary);

    return 0;
}
