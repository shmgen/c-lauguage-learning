#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char text[] = {'2', '3', 'a', 'A', '5', 'B', 'o'};
    int digits = 0;
    int lowercase = 0;
    int uppercase = 0;
    int length = sizeof(text) / sizeof(text[0]);

    for (int i = 0; i < length; i++)
    {
        unsigned char ch = (unsigned char)text[i];

        if (isdigit(ch))
        {
            digits++;
        }
        else if (islower(ch))
        {
            lowercase++;
        }
        else if (isupper(ch))
        {
            uppercase++;
        }
    }

    printf("Digits: %d\n", digits);
    printf("Lowercase letters: %d\n", lowercase);
    printf("Uppercase letters: %d\n", uppercase);

    return 0;
}
