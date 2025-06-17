// 6. Write a program to check whether given number is divisible by 5 or 7? (with || operator and with else if)
#include <stdio.h>
int main()
{
    int n;

    printf("Enter A Number :");
    scanf("%d", &n);

    // using || operator
    if (n % 5 == 0 || n % 7 == 0)
    {
        printf("\n %d Is Divisible By 5 OR 7 :", n);
    }
    else
    {
        printf("\n %d is  NOT Divisible By 5 OR 7 :", n);
    }

    // using else iF
    if (n % 5 == 0)
        printf("\n %d is divisible 5 :", n);

    else if (n % 7 == 0)
        printf("\n %d is divisible 7 :", n);

    else
        printf("\n %d is  NOT Divisible By both 5 and 7 :", n);

    return 0;
}