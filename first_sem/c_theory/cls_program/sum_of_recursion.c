#include <stdio.h>

// Recursive function to get the sum of an array
int get_array_sum(int number[], int size)
{

    if (size <= 0)
    {
        return 0;
    }

    return number[size - 1] + get_array_sum(number, size - 1);
}

int main()
{
    int mynumber[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the %d number:", i + 1);
        scanf("%d", &mynumber[i]);
    }

    int sum = get_array_sum(mynumber, 5);
    printf("the sum is %d", sum);

    return 0;
}
