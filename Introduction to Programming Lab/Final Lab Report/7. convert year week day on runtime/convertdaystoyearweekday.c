#include <stdio.h>
int main()
{
    //variables
    int days, weeks, years, reminder;

    //user input
    printf("Enter Days : ");
    scanf("%d", &days);

    //calculate
    years = days/365;
    reminder = days%365;
    weeks = reminder/7;
    days = reminder%7;

    printf("%d years, %d weeks, %d days \n", years, weeks, days);

    return 0;
}
