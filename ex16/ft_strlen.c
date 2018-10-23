#include <stdio.h>

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

int main(void)
{
    char lol[] = "lol";
    printf("%d\n", ft_strlen(lol));
}