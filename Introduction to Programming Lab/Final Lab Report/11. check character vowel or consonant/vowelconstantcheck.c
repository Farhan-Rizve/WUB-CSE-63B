#include <stdio.h>
int main()
{
    //variable
    char alp;

    //user input
    printf("Enter a character : ");
    scanf("%c", &alp);

    // check character
    if(alp == 'a' || alp == 'e' || alp == 'i' || alp == 'o' || alp == 'u'){
        printf("The character '%c' is vowel ", alp);
    }
    else{
        printf("The character '%c' is constant ", alp);
    }

    return 0;
}
