#include <stdio.h>

int ft_strlen(int *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
int main()
{
    int start = 0;
    int n = 1;
    int array[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int end = ft_strlen(array);
    end--;
    int middle;
    while (end >= start)
    {
        middle = start + (end - start) / 2;
        if (array[middle] == n)
        {
            printf("%d", middle);
            return (0);
        }
        else if (array[middle] > n)
            end = middle - 1;
        else
            start = middle + 1;
    }
    printf("-1");
    return (0);
}