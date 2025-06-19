// 11. Write a program to compare two numbers? (==,>,<)
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter 2 Nubers To Compare Them :");
    scanf("%d%d", &a, &b);

    if (a == b)
        printf("\n %d %d Are Equal :", a, b);

    else if (a > b)
        printf("\n %d Is GREATER Than %d", a, b);

    else if (a < b)
        printf("\n %d Is LESS Than %d", a, b);

    return 0;
}