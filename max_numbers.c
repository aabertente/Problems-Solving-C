// Is ready
#include <stdio.h>

int main(int argc, char **argv)
{
    int n;
    printf("aabertente : Please enter #numbers : ");
    scanf("%d\n", &n);
    int nbrs[n];
    int max = nbrs[0];
    int i = 0;
    while (i < n)
    {
        scanf("%d", &nbrs[i]);
        i++;
    }
    int j = 1;
    while (j < n) // ex : 2 3 5 6
    {
        if (nbrs[j] > max)
          max = nbrs[j];
        j++;
    }
    printf("the max of numbers is : %d", max);
    return (0);
}
