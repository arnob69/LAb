#include <stdio.h>
main()
{
    int num;
    printf("\nEnter an integer:\n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is even.", num);
    }
    else
    {
        printf("%d is odd.", num);
    }
    getch();
}