// 15. Write a program, which accepts annual basic salary of an employee and calculates and displays the Income tax as per the following rules 1. Basic: < 1,50,000 Tax = 0 ,2. 1,50,000 to 3,00,000 Tax = 20% , 3. > 3,00,000 Tax = 30%
#include <stdio.h>
int main()
{
    float sal, tax, tsal;
    printf("Enter Annual Basic Salary :");
    scanf("%f", &sal);

    // 1. Basic: < 1,50,000 Tax = 0 ,2. 1,50,000 to 3,00,000 Tax = 20% , 3. > 3,00,000 Tax = 30%
    if (sal < 150000)
        tax = 0;

    else if (sal <= 300000)
        tax = (sal * 20) / 100;

    else
        tax = (sal * 30) / 100;

    printf("\n Tax Applied On Basic Salary %f:", tax);
    tsal = sal - tax;

    printf("\n -------------------------------------------------------------- ");
    printf("\n |    Annual Salary    |     INCOM TAX     |    IN-HAND-SAL    |");
    printf("\n ---------------------------------------------------------------");
    printf("\n |%21f|%19f|%19f|", sal, tax, tsal);
    printf("\n -------------------------------------------------------------- ");

    return 0;
}
