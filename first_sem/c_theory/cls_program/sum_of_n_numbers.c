#include <stdio.h>
int main()
{
    int N;
    int i, j;
    int sum = 0;
    printf("enter N value:");
    scanf("%d", &N);
    if (N > 5)
    {
        for (i = 5; i <= N; i++)
            sum = sum + i;
        printf("sum of numbers from 5 to %d is %d", N, sum);
    }
    else
    {
        printf("error msg");
    }
}
