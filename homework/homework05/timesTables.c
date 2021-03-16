#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int N = atoi(argv[1]);

    int table[N][N];

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            table[i - 1][j - 1] = i * j;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (table[i][j] == 1)
            {
                printf("X\t");
            }
            else
            {
                printf("%d\t", table[i][j]);
                if (j == N - 1)
                {
                    printf("\n");
                }
            }
        }
    }

    return 0;
}