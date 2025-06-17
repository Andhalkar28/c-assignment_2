// 1. Write a program to check whether given number is positive?
// 2. Write a program to check whether given number is positive or negative?

#include <stdio.h>
int main()
{
    int num;
    printf("Enter A Number:");
    scanf("%d", num);

    if (num > 0)
        printf("Is Positive Number");

    else if (num < 0)
        printf("Is Negetive Number");

    else
        printf("Is a Zero ");

    return 0;
}
