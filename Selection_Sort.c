#include <stdio.h>

int ft_strlen(int *str);
int main()
{
    int i = 0;
    int array[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int len = ft_strlen(array);
    while (i < len)
    {
        int j = i + 1;
        while (j < len)
        {
            if (array[j] < array[i])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
            j++;
        }
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