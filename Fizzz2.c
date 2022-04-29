#include <stdio.h>
#include <time.h>

int main()
{
    time_t t0 = time(0);

    time_t t1 = time(0);
    unsigned int deffrenceTime = difftime(t0, t1);
    printf("--Time it takes is : %d(s)\n", deffrenceTime);
    return (0);
}