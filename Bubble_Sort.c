//ready
#include <stdio.h>
#include <stdbool.h>

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
    bool isSwaped = true;
    int array[10] = {9, 2, 3, 4, 5, 6, 7, 8, 1};
    printf("base = %d, %d, %d, %d, %d, %d, %d, %d, %d\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6], array[7], array[8]);
    int len = ft_strlen(array);
    while (i < len && isSwaped == true)
    {
        isSwaped = false;
        j = 0;
        while (j < len - i - 1)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                isSwaped = true;
                printf("%d, %d, %d, %d, %d, %d, %d, %d, %d\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6], array[7], array[8]);
            }
            j++;
        }
        i++;
    }
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("%d, %d, %d, %d, %d, %d, %d, %d, %d\n", array[0], array[1], array[2], array[3], array[4], array[5], array[6], array[7], array[8]);
    return (0);
}