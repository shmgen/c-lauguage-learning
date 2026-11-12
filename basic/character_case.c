#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int ch;

    printf("Enter one character: ");
    ch = getchar();

    if (isupper((unsigned char)ch))
    {
        printf("%c is an uppercase letter.\n", ch);
    }
    else if (islower((unsigned char)ch))
    {
        printf("%c is a lowercase letter.\n", ch);
    }
    else
    {
        printf("%c is not a letter.\n", ch);
    }

    return 0;
}
