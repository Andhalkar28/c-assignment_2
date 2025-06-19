// 9. Accept any year as input through the keyboard. Write a program to check whether the year isa leap year or not. (Hint leap year is divisible by 4 and not by 100 or divisible by 400)
#include <stdio.h>
int main()
{
    int year;
    printf("Enter Year To Check Leap Year Or Not :");
    scanf("%d", &year);

    // leap year is divisible by 4 and not by 100 or divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    printf("\n %d Is An Leap Year ", year);

    else
    printf("\n %d Is Not A Leap Year !!",year);

    return 0;
}