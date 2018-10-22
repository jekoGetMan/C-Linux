#include <unistd.h>

void ft_putchar(char display)
{
    write(1, &display, 1);
}

void ft_print_alphabed(void)
{
    char i;

    i = 'a';
    while (i <= 'z')
    {
        ft_putchar(i);
        i++;
    }    
}

int main(void)
{
    ft_print_alphabed();
    return (0);
}