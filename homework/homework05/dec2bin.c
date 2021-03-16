#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter a decimal number:\n");
    fflush(stdout);

    scanf("%d", &num);

    int a[32]= {0};

    for (int i = 0; num > 0; i++)
    {
        a[31-i] = num % 2;

        num /= 2;

    }

    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}