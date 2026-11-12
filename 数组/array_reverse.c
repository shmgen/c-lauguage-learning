#include <stdio.h>

void print_array(const int numbers[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", numbers[i]);
    }

    printf("\n");
}

void reverse_array(int numbers[], int length)
{
    int left = 0;
    int right = length - 1;

    while (left < right)
    {
        int temporary = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temporary;

        left++;
        right--;
    }
}

int main(void)
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    print_array(numbers, length);
    reverse_array(numbers, length);
    print_array(numbers, length);

    return 0;
}
