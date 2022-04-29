//
#include <stdio.h>
// coins : 200, 100, 50, 20, 10, 5, 2, 1;
int ft_strlen(int *str);
int main()
{
    int i = 0;
    int j = 0;
    int c = 1;
    int coins[9] = {200, 100, 50, 20, 10, 5, 2, 1};
    int n = 500;
    int end = ft_strlen(coins);
    printf("Your need : %d\n", n);
    while (i < end && n != 0)
    {
        //int j = 0;
        while (j < end && n != 0)
        {
            if (n >= coins[j])
            {
                n -= coins[j];
                printf("coin_%d = -%d\n", c, coins[j]);
                printf("n = %d\n", n);
                c++;
            }
            //j++;
            printf(".\n");
        }
        j++;
        i++;
    }
    printf("coins = %d\n", c - 1);
    return (0);
}
int ft_strlen(int *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}