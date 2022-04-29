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
    // int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int len = ft_strlen(array);
    // float middle = len / 2;
    printf("%d / %d = %.2f", 9, 2, 9 / 2);
    return (0);
}
