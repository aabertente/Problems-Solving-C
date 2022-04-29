#include <stdio.h>

int ft_strlen(int *str);
int main()
{
    int i = 0;
    int ii = 0;
    int arr[6] = {9, 8, 7, 4, 3};
    int arr2[5] = {6, 5, 2, 1};
    int len = ft_strlen(arr);
    int len2 = ft_strlen(arr2);
    while (i < len && ii < len2)
    {
        int j = 0;
        int jj = 0;
        while (j < len - i - 1)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
        }
        while (jj < len2 - ii - 1)
        {
            if (arr2[jj] > arr2[jj + 1])
            {
                int swap = arr2[jj];
                arr2[jj] = arr2[jj + 1];
                arr2[jj + 1] = swap;
            }
            jj++;
        }
        i++;
        ii++;
        // start of merge sort
    }
    printf("arr : %d, %d, %d, %d, %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
    printf("arr2 : %d, %d, %d, %d\n", arr2[0], arr2[1], arr2[2], arr2[3]);
}
int ft_strlen(int *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}