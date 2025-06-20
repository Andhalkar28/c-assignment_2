// 18. A library charges a fine for every book returned late. Accept the number of days the member is late, compute and print the fine as follows:(less than five days Rs fine, for 6 to 10 days Rs. Fine and above 10 days Rs. fine )
#include <stdio.h>
int main()
{
    int days;
    float fine = 0;

    printf("Enter Number Of Late Days :");
    scanf("%d", &days);

    if (days <= 5)
        fine = days * 1;
    else if (days <= 10)
        fine = days * 2;
    else
        fine = days * 5;

    printf("\n Late Days %d", days);
    printf("\n Late Fees Amount :%.2f", fine);

    return 0;
}