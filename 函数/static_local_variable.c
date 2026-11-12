#include <stdio.h>

int next_value(void)
{
    static int value = 0;
    value++;

    return value;
}

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", next_value());
    }

    printf("\n");

    return 0;
}
