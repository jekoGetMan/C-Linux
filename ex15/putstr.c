#include <unistd.h>

void ft_putchar(char display)
{
    write(1, &display, 1);
}

void ft_putstr(char *str)
{
    short int i;
    i = 0;

    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main(void)
{
    char str[] = "lol";
    ft_putstr(str);
    return (0);
}

c