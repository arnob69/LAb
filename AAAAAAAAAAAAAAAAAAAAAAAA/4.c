#include <stdio.h>
main()
{
    float c, f;
    printf("\nEnter the fahrenheit:");
    scanf("%f", &f);
    c = ((f - 32) * 5) / 9;
    printf("Temperature in celsius is %.2f", c);
    getch();
}