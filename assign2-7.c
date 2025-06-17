// 7. Write a program to accept three numbers and check whether the first is between the other two numbers. Ex: Input 20 10 30. Output: 20 is between 10 and 30
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Numbers(a b c) :");
    scanf("%d%d%d", &a, &b, &c);

    // using && || in if else
    if ((a > b && a < c) || (a > c && a < b))
        printf("\n %d Is Between %d And %d ", a, b, c);

    else
        printf("\n %d Is NOT Between %d And %d ", a, b, c);

    return 0;
}