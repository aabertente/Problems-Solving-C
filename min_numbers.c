// Is ready
#include <stdio.h>

int ft_strlen(int *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
int main(int argc, char **argv)
{
    int array[14] = {22, 5, 3, 6, 9, 4, 14, 8, 9, 99, 65, 7, 110};
    int max = array[0];
    int len = ft_strlen(array);
    int j = 0;
    while (j < len) // ex : 2 3 5 6
    {
        if (array[j] < max)
            max = array[j];
        j++;
    }
    printf("the min of numbers is : %d", max);
    return (0);
}
