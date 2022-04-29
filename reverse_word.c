#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    ft_putstr(char *str)
{
    while (*str)
        write (1, str++, 1);
}

int main(int argc, char **argv)
{
    int i, len;
    char *str;
    i = 0;
    printf("aabertente : welcome ..\n");
    printf("aabertente : Enter your string : ");
    scanf("%s", &str);
    // the 'len' varaible take the lenght of my word useing 'ft_strlen()' function
    len = ft_strlen(str);
    len--;
    while (len > 0)
    {
        str[i] = str[len];
        len--;
        i++;
    }
    // here the 'ft_putstr' function print my word that reversed wiht while loop
    printf("%s", str);
    return (0);
}
