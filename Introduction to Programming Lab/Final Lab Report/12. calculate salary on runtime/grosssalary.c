#include <stdio.h>
int main()
{
    //variables
    float basic_salary, gross_salary, ha, dra;

    //user input
    printf("Enter your salary : ");
    scanf("%f", &basic_salary);

    //salary calculate
    if(basic_salary < 25000){
        ha = 0.1 * basic_salary;
        dra = 0.7 * basic_salary;
    }
    else if(basic_salary >= 25000 && basic_salary < 50000){
        ha = 0.15 * basic_salary;
        dra = 0.8 * basic_salary;
    }
    else{
        ha = 0.20 * basic_salary;
        dra = 0.9 * basic_salary;
    }

    // print salary
    gross_salary = basic_salary + ha + dra;

    printf("\nYour basic salary is %.2f\n", basic_salary);
    printf("Your Gross salary is %.2f\n", gross_salary);

    return 0;
}
