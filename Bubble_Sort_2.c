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
    int i = 0;
    int j;
    int swap;
    int array[12] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int len = ft_strlen(array);
    printf(" \n");
    printf("len = %d\n", len);
    printf("base = %d, %d, %d, %d, %d, %d, %d, %d, %d.\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6], array[7], array[8]);
    while (i < len) // 1 ==> 3
    {
        j = i + 1;
        while (j < len)
        {
            if (array[j] < array[i]) // ex: 8 > 5
            {
                swap = array[i];     // 5
                array[i] = array[j]; // 5 ==> 8
                array[j] = swap;     // 8 ==> 5
                printf("swaping %d : %d, %d, %d, %d, %d, %d, %d, %d, %d\n", j, array[0], array[1], array[2], array[3], array[4], array[5], array[6], array[7], array[8]);
            }
            j++;
        }
        printf(".\n");
        i++;
    }
    printf(" \n");
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("%d, %d, %d, %d, %d, %d, %d, %d, %d.\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6], array[7], array[8]);
    return (0);
}