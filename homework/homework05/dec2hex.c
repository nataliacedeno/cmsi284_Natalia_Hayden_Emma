#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num;
    int maxSize;

    if (argc < 2)
    {
        maxSize = 8;
    }
    else if (atoi(argv[1]) == 32)
    {
        maxSize = 8;
    }
    else if (atoi(argv[1]) == 64)
    {
        maxSize = 16;
    }
    else
    {
        printf("Command line argument should be 32 or 64");
        return 1;
    }

    int a[maxSize];
    int size = 0;

    printf("Enter a decimal number:\n");
    fflush(stdout);

    scanf("%d", &num);

    for (int i = 1; num > 0; i++)
    {
        a[maxSize - i] = num % 16;

        size ++;

        num /= 16;
    }

    for (int i = 0; i< maxSize-size; i++) {
        printf("0");
    }

    for (int i = maxSize-size; i < maxSize; i++)
    {
        switch (a[i])
        {
        case 10:
            printf("%c", 'A');
            break;
        case 11:
            printf("%c", 'B');
            break;
        case 12:
            printf("%c", 'C');
            break;
        case 13:
            printf("%c", 'D');
            break;
        case 14:
            printf("%c", 'E');
            break;
        case 15:
            printf("%c", 'F');
            break;
        default:
            printf("%d", a[i]);
        }
    }

    return 0;
}