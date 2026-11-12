#include <stdio.h>

int main(void)
{
    union Data
    {
        char character;
        int number;

        struct
        {
            char letter;
            double decimal;
        } nested;
    };

    printf("Size of union Data: %zu\n", sizeof(union Data));

    return 0;
}
