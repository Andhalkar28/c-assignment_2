// 13. Accept the time as hour, minute and seconds and check whether the time is valid. (Hint:0<=hour<24, 0<=minute <60, 0<=second <60) (3 logics
#include <stdio.h>
int main()
{
    int h, m, s;
    printf("Enter Time- HH:MM:SS :");
    scanf("%d%d%d", &h, &m, &s);

    // using nested if
    //(Hint:0<=hour<24, 0<=minute <60, 0<=second <60)
    if (h >= 0 && h <= 24)
    {
        if (m >= 0 && m <= 60)
        {
            if (s >= 0 && s <= 60)
            {
                printf("\n Time Is Valid :%02d:%02d:%02d", h, m, s);
            }
            else
                printf("\n INVALID SECONDS !!!");
        }
        else
            printf("\n INVALID MIN !!!");
    }
    else
        printf("\n INVALID HOURS A!!!");

    return 0;
}