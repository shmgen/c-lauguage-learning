#include <stdio.h>

void print_second_element(const int numbers[])
{
    printf("%d\n", *(numbers + 1));
}

int main(void)
{
    int numbers[] = {12, 33, 22, 44};

    print_second_element(numbers);

    return 0;
}
