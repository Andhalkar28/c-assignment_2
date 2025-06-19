// 12. Write a program to find maximum of three numbers? (3-4 logics) and (with conditional operator). Modify and find minimum of three numbers
#include <stdio.h>
int main()
{
    int a, b, c, max, min;
    printf("Enter 3 Numbers TO Find Maximun & Minimum :");
    scanf("%d%d%d", &a, &b, &c);

    max = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);

    printf("\n %d Is The Maximum", max);

    min = (a <= b) ? ((a <= c) ? a : c) : ((b <= c) ? b : c);
    printf("\n %d Is The Minimum", min);
    return 0;
}