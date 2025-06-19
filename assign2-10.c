// 10. Accept three sides of triangle as input, and print whether the triangle is valid or not. (Hint: The triangle is valid if the sum of each of the two sides is greater than the third side)
#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter 3 Sides Of Triangle TO Check whether The Triangle Is Valid Or Not :");
    scanf("%d%d%d", &s1, &s2, &s3);

    //(Hint: The triangle is valid if the sum of each of the two sides is greater than the third side)23
    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1)
        printf("The Triangle Is Valid ");

    else
        printf("The Triangle Is InValid !!!");

    return 0;
}