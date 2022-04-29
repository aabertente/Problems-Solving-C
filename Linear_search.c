//ready
#include <stdio.h>
/*int linear_search(int nbr)
{
    int i = 0;
    int n = nbr;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = ft_strlen(array);
    while (i < len - 1)
    {
        if (array[i] == n)
        {
            printf("aabertente : Your number(%d) is in index : array[%d]", n, i);
            return (0);
        }
        i++;
    }
    printf("aabertente : Your number(%d) is not exite.", n);
}*/
int ft_strlen(int *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}
int main()
{
    int i = 0;
    int n = 5;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = ft_strlen(array);
    while (i < len - 1)
    {
        if (array[i] == n)
        {
            printf("aabertente : Your number(%d) is in index : array[%d]\n", n, i);
            return (0);
        }
        i++;
    }
    printf("aabertente : Your number(%d) doesn't exite.", n);
    return (0);
}