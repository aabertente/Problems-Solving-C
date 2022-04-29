//
#include <stdio.h>
// coins : 200, 100, 50, 20, 10, 5, 2, 1;
int ft_strlen(int *str);
int main()
{
    int i = 0;
    int coins[9] = {200, 100, 50, 20, 10, 5, 2, 1};
    int n = 900;
    int c = 1;
    int end = ft_strlen(coins);
    printf("Your need : %d\n", n);
    while (i < end && n != 0)
    {
        if (n >= coins[0])
        {
            n -= coins[0];
            printf("coin_%d = -%d\n", c, coins[0]);
            printf("n = %d\n", n);
            c++;
        }
        else if (n >= coins[1])
        {
            n -= coins[1];
            printf("coin_%d = -%d\n", c, coins[1]);
            printf("n = %d\n", n);
            c++;
        }
        else if (n >= coins[2])
        {
            n -= coins[2];
            printf("coin_%d = -%d\n", c, coins[2]);
            printf("n = %d\n", n);
            c++;
        }
        else if (n >= coins[3])
        {
            n -= coins[3];
            printf("coin_%d = -%d\n", c, coins[3]);
            printf("n = %d\n", n);
            c++;
        }
        else if (n >= coins[4])
        {
            n -= coins[4];
            printf("coin_%d = -%d\n", c, coins[4]);
            printf("n = %d\n", n);
            c++;
        }
        else if (n >= coins[5])
        {
            n -= coins[5];
            printf("coin_%d = -%d\n", c, coins[5]);
            printf("n = %d\n", n);
            c++;
        }
        else if (n >= coins[6])
        {
            n -= coins[6];
            printf("coin_%d = -%d\n", c, coins[6]);
            printf("n = %d\n", n);
            c++;
        }
        else if (n >= coins[7])
        {
            n -= coins[7];
            printf("coin_%d = -%d\n", c, coins[7]);
            printf("n = %d\n", n);
            c++;
        }
        i++;
    }
    printf("coins : %d", c - 1);
    return (0);
}
int ft_strlen(int *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}