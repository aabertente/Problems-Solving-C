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
int main(int argc, char **argv)
{
    int i, len;
    char *str;
    printf("aabertente : Welcome ..\n");
    printf("aabertente : Enter your string : ");
    scanf("%s", &str);
    len = ft_strlen(str);
    len--;
    i = 0;
    while (i < str[len / 2])
    {
        if (str[i] != str[len - i])
            printf("false");
        i++;
    }
    printf("true");
    return (0);
}
