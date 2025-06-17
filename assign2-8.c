// 8. Accept a lowercase character from the user and check whether the character is a vowel or consonant. (Hint: a,e,i,o,u are vowels)
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter A Lowercase Character :");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("%c is a VOWEL ", ch);

    else
        printf("%c are no vowel in your character", ch);

    return 0;
}