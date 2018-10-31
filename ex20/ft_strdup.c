#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strcpy(char *src, char *dst)
{
    short int i;
    short int j;

    i = 0;
    j = 0;
    while (src[i] != '\0')
    {
        dst[j] = src[i];
        j++;
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

int ft_strlen(char *str)
{
    short int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strdup(char *src)
{
    char *tmp;

    tmp = (char*)malloc(sizeof(*tmp) * (ft_strlen(src) + 1));
    tmp = ft_strcpy(src, tmp);
    return (tmp);
}

int main(void)
{
    char str[] = {"lol"};
    printf("%s\n", ft_strdup(str));
    return (0);
}



