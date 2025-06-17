// 3. Write a program to check whether given number is even or odd (with if and conditional operator ?:)?
#include <stdio.h>
int main()
{
    int n;
    printf("Enter A Number :");
    scanf("%d", &n);

    // conditional operator
    // (condition)?(true block):(false block);

    (n % 2 == 0) ? printf("%d is EVEN  \n", n) : printf("%d is ODD \n", n);

    return 0;
}