#include <stdio.h>
#include <math.h>
main()
{
    float a, b, c, s, area, perimeter;
    printf("\nEnter three sides of a triangle:\n");
    scanf("%f%f%f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    perimeter = a + b + c;
    printf("Area of the triangle is %.2f and perimeter is %.2f", area, perimeter);
    getch();
}