// 14. Accept the x and y coordinate of a point and find the quadrant in which the point lies. (2 logics and origin condition)
#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter X & Y Co-ordinates :");
    scanf("%f%f", &x, &y);

    // origin condition
    if (x == 0 && y == 0)
        printf("\n The Point Is At ORIGIN It self ");

    else if (x > 0 && y > 0)
        printf("\n The Point Lies in QUADRANT-I ");

    else if (x < 0 && y > 0)
        printf("\n The Point Lies in QUADRANT-II ");

    else if (x < 0 && y > 0)
        printf("\n The Point Lies in QUADRANT-III");

    else if (x > 0 && y < 0)
        printf("\n The Point Lies in QUADRANT-IV");

    else if (x == 0)
        printf("\n The Point Lies On the Y-AXIS");

    else
        printf("\n The Point Lies On the Y-AXIS");

    return 0;
}