#include <stdio.h>

int main()
{
    //variable
    int n , reverses = 0, original, remainder;

    //user input
    printf("Enter a number : ");
    scanf("%d", &n);

    // store original
    original = n;

    //reverse digits
    while(n != 0){
        remainder = n % 10;
        reverses = reverses * 10 + remainder;
        n /= 10;
    }

    //check n is palindrome
    if(original == reverses){
        printf("%d is palindrome", original);
    }
    else{
        printf("%d is not palindrome", original);
    }

    return 0;
}
