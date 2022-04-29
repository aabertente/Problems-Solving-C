#include <stdio.h>

int ft_strlen(int *str);
int main()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int s = arr[0];
    int e = ft_strlen(arr);
    int i = s - 1;
    int j = s;
    while (j < e)
    {
        if (arr[j] < arr[e])
        {
            int temp = arr[j];
            arr[j] = arr[e];
            arr[e] = temp;
            i++;
        }
    }
    i++;
    int swap = arr[e];
    arr[e] = arr[i];
    arr[i] = swap;
    printf("%d", i);
    printf("%d, %d, %d, %d, %d, %d, %d, %d, %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8]);
    return (0);
}
int ft_strlen(int *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}