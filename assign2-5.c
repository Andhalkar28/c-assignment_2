// 5. Write a program to check whether given number is divisible by 5 and 7? (with && operator and with nested if
#include <stdio.h>
int main()
{
    int n;

    printf("Enter A Number :");
    scanf("%d",&n);

    // using && operator
    if (n % 5 == 0 && n % 7 == 0)
    {
        printf("\n %d Is Divisible By both 5 and 7 :",n);
    }
    else
    {
        printf("\n %d is  NOT Divisible By both 5 and 7 :",n);
    }

    // using NESTED IF
    if (n % 5 == 0)
    {
        if (n % 7 == 0)
        {
            printf("\n %d is divisible By both 5 and 7 :",n);
        }
        else
        {
            printf("\n %d is divisible By 5 But NOT By and 7 :",n);
        }
    }
    else
    {
        printf("\n %d is divisible By both 5 and 7 :",n);
    }

    return 0;
}
