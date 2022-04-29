#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void programme();
void exit_programme();
int ft_strlen(int *str);

int main(int argc, char **argv)
{
    char repeat;
    int a, b, c, d, F;
    printf("aabertente : Welcome to the soduco game, \"version 2021 designed by Abdellah Abertente\"\n");
    printf("aabertente : Enter \"y/n\" if you want to start : ");
    scanf("%c", &repeat);
    switch (repeat)
    {
    case 'y':
        programme();
        break;
    case 'n':
        exit_programme();
        break;
    }
    return (0);
}

int ft_strlen(int *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void programme()
{
    printf("\t\t++=====+=====+=====++=====+=====+=====++=====+=====+=====++\n\t\t||  a  |  .  |  .  ||  e  |  .  |  i  ||  j  |  .  |  .  ||\n\t\t++-----+-----+-----++-----+-----+-----++-----+-----+-----++\n\t\t||  .  |  b  |  .  ||  .  |  f  |  g  ||  .  |  k  |  l  ||\n");
    printf("\t\t++-----+-----+-----++-----+-----+-----++-----+-----+-----++\n\t\t||  d  |  .  |  c  ||  .  |  h  |  .  ||  n  |  .  |  m  ||\n\t\t++=====+=====+=====++=====+=====+=====++=====+=====+=====++\n\t\t||  o  |  p  |  .  ||  s  |  .  |  t  ||  .  |  .  |  w  ||\n");
    printf("\t\t++-----+-----+-----++-----+-----+-----++-----+-----+-----++\n\t\t||  .  |  q  |  .  ||  .  |  u  |  .  ||  .  |  v  |  .  ||\n\t\t++-----+-----+-----++-----+-----+-----++-----+-----+-----++\n\t\t||  .  |  .  |  r  ||  .  |  .  |  .  ||  .  |  .  |  .  ||\n");
    printf("\t\t++=====+=====+=====++=====+=====+=====++=====+=====+=====++\n\t\t||  .  |  .  |  x  ||  A  |  .  |  C  ||  .  |  .  |  E  ||\n\t\t++-----+-----+-----++-----+-----+-----++-----+-----+-----++\n\t\t||  .  |  y  |  .  ||  .  |  B  |  .  ||  D  |  .  |  F  ||\n");
    printf("\t\t++-----+-----+-----++-----+-----+-----++-----+-----+-----++\n\t\t||  .  |  z  |  .  ||  .  |  .  |  .  ||  .  |  .  |  .  ||\n\t\t++=====+=====+=====++=====+=====+=====++=====+=====+=====++\n");
    //
    printf("Now you have this primary stractur, what you need to do is just remplace the caracters at numbers, and than the programe it rempli automaticly the empty boxes in a way where preparation in not repeated within the sector.\n");
    //
    printf("aabertente : Awad every charracter of a number by your choice...\n");
    int i1 = 0;
    int j1 = 0;
    //int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A,B,C,D,E,F;
    int caracters[32] = {a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, A, B, C, D, E, F};
    int len = ft_strlen(caracters);
    while (i1 < len - 1)
    {
        printf("%c : ", caracters[i1]);
        scanf("%d", &caracters[j1]);
        j1++;
        i1++;
    }
    printf("%d%d%d%d%d", caracters[0], caracters[1], caracters[2], caracters[3], caracters[4]);
}

void exit_programme()
{
    printf("OK! the programme is closed");
}