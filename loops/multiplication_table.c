#include <stdio.h>

int main(void)
{
    for (int row = 1; row <= 9; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            printf("%d * %d = %d\t", row, column, row * column);
        }

        printf("\n");
    }

    return 0;
}
