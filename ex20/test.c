#include <stdio.h>
#define N 5

int main(void)
{
    int arr[N];
    int i;
    int j;
    int tmp;

    arr[0] = 5;
    arr[1] = 4;
    arr[3] = 3;
    arr[4] = 6;

    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
    }
    for (i = 0; i <= N; i++)
        printf("%d\n", arr[i]);
    return (0);
}