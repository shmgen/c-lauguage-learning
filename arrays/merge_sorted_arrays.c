#include <stdio.h>

void print_merged_sorted(const int first[], int first_length,
                         const int second[], int second_length)
{
    int i = 0;
    int j = 0;

    while (i < first_length && j < second_length)
    {
        if (first[i] <= second[j])
        {
            printf("%d\n", first[i]);
            i++;
        }
        else
        {
            printf("%d\n", second[j]);
            j++;
        }
    }

    while (i < first_length)
    {
        printf("%d\n", first[i]);
        i++;
    }

    while (j < second_length)
    {
        printf("%d\n", second[j]);
        j++;
    }
}

int main(void)
{
    int first[1000];
    int second[1000];
    int first_length;
    int second_length;

    scanf("%d %d", &first_length, &second_length);

    for (int i = 0; i < first_length; i++)
    {
        scanf("%d", &first[i]);
    }

    for (int i = 0; i < second_length; i++)
    {
        scanf("%d", &second[i]);
    }

    print_merged_sorted(first, first_length, second, second_length);

    return 0;
}
