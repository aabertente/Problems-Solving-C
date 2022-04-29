#include <stdio.h>

int ft_strlen(int *str);

int main()
{
    int i = 1;
    int array[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int len = ft_strlen(array);
    while (i < len)
    {
        int k = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > k)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = k;
        i++;
    }
    printf("%d, %d, %d, %d, %d, %d, %d, %d, %d\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6], array[7], array[8]);
    return (0);
}
int ft_strlen(int *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}