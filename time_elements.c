#include <unistd.h>
#include <stdio.h>
#include <time.h>

int main()
{
    time_t t1 = time(0);
    //
    int i = 9;
    while (i >= 0)
    {
        printf("%d\n", i);
        i--;
    }
    //
    time_t t2 = time(0);
    double diffTime = difftime(t2, t1);
    printf("time is : %f(s)", diffTime);
    return (0);
}