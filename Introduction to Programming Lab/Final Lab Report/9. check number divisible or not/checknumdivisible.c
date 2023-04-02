#include <stdio.h>
int main()
{
    //variables
    int num;

    //user input
    printf("Enter a number :");
    scanf("%d", &num);

    //check number divisible or not
    if(num % 5 == 0 && num % 11 == 0){
        printf("This number %d is divisible by 5 & 11", num);
    }
    else if(num % 5 !=0 || num % 11 !=0){
        printf("This number %d is divisible by either 5 or 11", num);
    }
    else{
        printf("This number %d is divisible by either 5 or 11, not by both of them", num);
    }

    return 0;
}
