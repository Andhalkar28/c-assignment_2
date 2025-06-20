// 17. Write a program to accept quantity and rate for three items, compute the total sales amount, Also compute and print the discount as follows: (amount > – 20% discount, amount between to – 15% discount, amount between – to -- 8 % discount)
#include <stdio.h>
int main()
{
    int q1, q2, q3;
    float r1, r2, r3;
    float total, discount = 0.0, famount;

    printf("Enter Quantity & Rate For Item 1:");
    scanf("%d %f", &q1, &r1);

    printf("Enter Quantity & Rate For Item 2:");
    scanf("%d %f", &q2, &r2);

    printf("Enter Quantity & Rate For Item 3:");
    scanf("%d %f", &q3, &r3);

    total = (q1 * r1) + (q2 * r2) + (q3 * r3);

    if (total > 10000)
        discount = (total * 20) / 100;

    else if (total > 5000)
        discount = (total * 15) / 100;

    else if (total > 2000)
        discount = (total * 8) / 100;

    else
        discount = 0;

    famount = total - discount;

    printf("\n ------------------------------------------------------------------------------------ ");
    printf("\n |    Total Sales Amount    |     Discount Applied     |    Amount After Discount    |");
    printf("\n -------------------------------------------------------------------------------------");
    printf("\n |%26f|%26f|%29f|", total, discount, famount);
    printf("\n -------------------------------------------------------------- ----------------------");

    return 0;
}
