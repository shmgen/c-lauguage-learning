#include <stdio.h>

int main(void)
{
    int number;
    int result = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        result *= i;
    }

    printf("%d! = %d\n", number, result);

    return 0;
}
