#include <stdio.h>
int main()
{
    //variables
    int days;

    //user input
    printf("Enter the number of days : ");
    scanf("%d", &days);

    //condition
    if(days <= 5){
        printf("\nThe amount of fine is 500");
    }
    else if(days >= 7 && days <= 10){
        printf("\nThe amount of fine is 1000");
    }
    else if(days > 10 && days < 30){
        printf("\nThe amount of fine is 1500");
    }
    else{
        printf("\nThe library membership is cancelled");
    }

    return 0;

}
