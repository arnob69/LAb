#include <stdio.h>
#define pi 3.1416
main()
{
    float area, c, r;
    printf("\nEnter the radius of circle:\n");
    scanf("%f", &r);
    area = pi * r * r;
    c = 2 * pi * r;
    printf("The area of circle is %.2f & circumference is %.2f", area, c);
    getch();
}