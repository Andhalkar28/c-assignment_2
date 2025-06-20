// 19. Write a Program to convert lowercase letter into uppercase letter and vice versa.
#include <stdio.h>
int main()
{
    char ch;

    printf("Enter A Alphabate :");
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("You've Entered LOWERCASE Alphabate %c :",ch);
        ch = ch - 32;
        printf("\n After Converting Alphabate Lower To Uppercase :%c ", ch);
    }

    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("You've Entered UPPERCASE Letter %c:",ch);
        ch = ch + 32;
        printf("\n After Converting Alphabate Upper To Lowercase :%c ", ch);
    }
    else
        printf("INVALID INPUST , PLEASE ENTER AN ALPHABATE OR A WORD !!! ");
    return 0;
}