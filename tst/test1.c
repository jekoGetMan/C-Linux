#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcpy(char *dst, char *src)
{
    short int i;
    short int j;

    i = 0;
    j = 0;
    while (src[i] != '\0')
    {
        dst[j] = src[i];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dst);
}

int main(void)
{       
    char lol[] = "";
    char bok[] = "vok";


    printf("%s\n", ft_strcpy(lol, bok));

    return (0);
} 
