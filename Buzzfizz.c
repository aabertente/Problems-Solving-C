#include <unistd.h>
#include <time.h>
#include <stdio.h>

void ft_putnbr(int nb)
{
    if (nb > 9)
        ft_putnbr(nb / 10);
    write(1, &"0123456789"[nb % 10], 1);
}
int main()
{
    int i;

    i = 1;
    time_t t0 = time(0);
    while (i <= 100)
    {
        if (i % 4 == 0 && i % 7 == 0)
            write(1, "buzzfizz", 8);
        else if (i % 4 == 0)
            write(1, "buzz", 4);
        else if (i % 7 == 0)
            write(1, "fizz", 4);
        else
            ft_putnbr(i);
        write(1, "\n", 1);
        i++;
    }
    time_t t1 = time(0);
    float deffrenceTime = difftime(t0, t1);
    printf("--Time it takes is : %f(s)\n", deffrenceTime);
    return (0);
}
