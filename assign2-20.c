// 20. Write a program to check whether given character is a digit or a character in lowercase or uppercase alphabet. (Hint ASCII value of digit is between 48 to 58 and Lowercase characters have ASCII values in the range of 97 to122, uppercase is between 65 and 90)
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Something :");
    scanf(" %c", &ch);

    if (ch >= '0' && ch <= '9')
        printf("you Entered A DIGIT :%c", ch);

    else if (ch >= 'a' && ch <= 'z')
        printf("You've Entered LOWERCASE Alphabate %c :", ch);

    else if (ch >= 'A' && ch <= 'Z')
        printf("You've Entered UPPERCASE Letter %c:", ch);

    else
        printf("INVALID INPUST , PLEASE ENTER AN ALPHABATE OR A WORD !!! ");
    return 0;
}