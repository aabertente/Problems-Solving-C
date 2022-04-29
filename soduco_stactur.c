// this start on 29 oct 2021 at 11:37
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void programme();
void exit_programme();
int ft_strlen(char *str);

int main(int argc, char **argv)
{
    char repeat;
    int a, b, c, d, e, f;
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

int ft_strlen(char *str)
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
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, A, B, C, D, E, F;
    int numbers[32] = {a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, A, B, C, D, E, F};
    char caracters[32] = "abcdefghijklmnopqrstuvwXyzABCDEF";
    //int len = ft_strlen(caracters);
    while (i1 < 32)
    {
        printf("%c : ", caracters[i1]);
        scanf("%d", &numbers[j1]);
        i1++;
        j1++;
    }
    printf("aabertente : Your numbers here : a = %d, b = %d, c = %d, d = %d, e = %d, f = %d, g = %d, h = %d, i = %d, j = %d, k = %d, l = %d, m = %d, n = %d, o = %d, p = %d, q = %d, r = %d, s = %d, t = %d, u = %d, v = %d, w = %d, X = %d, y = %d, z = %d, A = %d, B = %d, C = %d, D = %d, E = %d, F = %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[5], numbers[6], numbers[7], numbers[8], numbers[9], numbers[10], numbers[11], numbers[12], numbers[13], numbers[14], numbers[15], numbers[16], numbers[17], numbers[18], numbers[19], numbers[20], numbers[21], numbers[22], numbers[23], numbers[24], numbers[25], numbers[26], numbers[27], numbers[28], numbers[29], numbers[30], numbers[31]);
    printf("\t\t++=====+=====+=====++=====+=====+=====++=====+=====+=====++\n\t\t||  %d  |  .  |  .  ||  %d  |  .  |  %d  ||  %d  |  .  |  .  ||\n\t\t++-----+-----+-----++-----+-----+-----++-----+-----+-----++\n\t\t||  x  |  %d  |  x  ||  x  |  %d  |  %d  ||  x  |  %d  |  %d  ||\n", numbers[0], numbers[4], numbers[8], numbers[9], numbers[1], numbers[5], numbers[6], numbers[10], numbers[11]);
    printf("\t\t++-----+-----+-----++-----+-----+-----++-----+-----+-----++\n\t\t||  %d  |  .  |  %d  ||  .  |  %d  |  .  ||  %d  |  .  |  %d  ||\n\t\t++=====+=====+=====++=====+=====+=====++=====+=====+=====++\n\t\t||  %d  |  %d  |  x  ||  %d  |  x  |  %d  ||  x  |  x  |  %d  ||\n", numbers[3], numbers[2], numbers[7], numbers[13], numbers[12], numbers[14], numbers[15], numbers[18], numbers[19], numbers[22]); //  a b c d e f g h i j k l m n o p q r s t u v w X y z A B CDEF
    printf("\t\t++-----+-----+-----++-----+-----+-----++-----+-----+-----++\n\t\t||  .  |  %d  |  .  ||  .  |  %d  |  .  ||  .  |  %d  |  .  ||\n\t\t++-----+-----+-----++-----+-----+-----++-----+-----+-----++\n\t\t||  x  |  x  |  %d  ||  x  |  x  |  x  ||  x  |  x  |  x  ||\n", numbers[16], numbers[20], numbers[21], numbers[17]);
    printf("\t\t++=====+=====+=====++=====+=====+=====++=====+=====+=====++\n\t\t||  .  |  .  |  %d  ||  %d  |  .  |  %d  ||  .  |  .  |  %d  ||\n\t\t++-----+-----+-----++-----+-----+-----++-----+-----+-----++\n\t\t||  x  |  %d  |  x  ||  x  |  %d  |  x  ||  %d  |  x  |  %d  ||\n", numbers[23], numbers[26], numbers[28], numbers[30], numbers[24], numbers[27], numbers[29], numbers[31]);
    printf("\t\t++-----+-----+-----++-----+-----+-----++-----+-----+-----++\n\t\t||  .  |  %d  |  .  ||  .  |  .  |  .  ||  .  |  .  |  .  ||\n\t\t++=====+=====+=====++=====+=====+=====++=====+=====+=====++\n", numbers[25]);
    printf("aabertente : what is next, my program is currently filling out all empty boxes in a smart way and according to the game rules.\n");
    printf("aabertente : wait...\n");
    printf("aabertente : wait...\n");
    printf("aabertente : wait...\n");
    int G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, x, Y, Z, a1, b1, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, m1, n1, o1, p1, q1, r1, s1, t1, u1, v1, w1, X1, y1, z1, a2, b2, c2;
    int xNumber[49] = {x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x, x};
    int i2 = 0;
    int j2 = 0;
    while (i2 < 49)
    {
        srand(time(0));
        for (int t = 0; t < 100; t++)
        {
            int t = 1 + rand() % (4);
            printf("%d, ", t); // print the first random number that ! a e i j b f g k l && (1 < 9);
        }
    }
}

void exit_programme()
{
    printf("OK! the programme is closed");
}