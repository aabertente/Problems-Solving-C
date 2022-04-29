//ready
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
    int len = ft_strlen(array);
    int middle = len / 2;
    len--;
    int j = middle;
    //rintf("%d, %d\n", len, middle);
    if (array[middle] == n)
    {
        printf("aabertente : (Case 1)Your number(%d) is his self the index of middle array[%d].\n", n, middle);
        return (0);
    }
    else if (array[middle] > n)
    {
        while (j >= start)
        {
            if (array[j] == n)
            {
                printf("aabertente : (Case 2)Your number(%d) in the index array[%d].\n", n, j);
                return (0);
            }
            j--;
        }
    }
    else if (array[middle] < n)
    {
        while (j <= array[len])
        {
            if (array[j] == n)
            {
                printf("aabertente : (Case 3)Your number(%d)in the index of array[%d].\n", n, j);
                return (0);
            }
            j++;
        }
    }
    printf("aabertente : Your number(%d) doesn't exite.", n);
    return (0);
}