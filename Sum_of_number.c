// Is ready
#include <stdio.h>

int main(int argc, char **argv)
{
    int n, i, j, sum;
    printf("aabertente : Welocome...\n");
    printf("aabertente : Enter N number : ");
    scanf("%d\n", &n);
    int nbr[n];
    i = 0;
    while (i < n)
    {
        scanf("%d", &nbr[i]);
        i++;
    }
    sum = 0;
    j = 0;
    while (j < n)
    {
        sum += nbr[j]; // sum = sum + nbr[i]  ex: 1 2 3 4 T= 10;
        j++;
    }
    printf("aabertente : Resultat of your sumilation is : %d", sum);
    return (0);
}
