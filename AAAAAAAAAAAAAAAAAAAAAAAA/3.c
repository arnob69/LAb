#include <stdio.h>
main()
{
    float area, perimeter, a, b;
    printf("\nEnter length and width of a rectangle:\n");
    scanf("%f%f", &a, &b);
    area = a * b;
    perimeter = 2 * (a + b);
    printf("The area of rectangle is %.2f and perimeter is %.2f", area, perimeter);
    getch();
}