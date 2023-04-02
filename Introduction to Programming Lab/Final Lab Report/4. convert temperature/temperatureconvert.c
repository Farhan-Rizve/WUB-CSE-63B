#include <stdio.h>
int main()
{
    //variables
    int c, f;

    // user input
    printf("Enter Tempature in Celsius : ");
    scanf("%d", &c);

    //operation
    f = (c*1.8)+32;

    printf("Tempature in Fahrenheit %d", f);

    return 0;
}
