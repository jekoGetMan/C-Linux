#include <unistd.h>
#include <stdio.h>

void ft_putchar(char display)
{
    write(1, &display, 1);
}

int main(int argc, char *argv[])
{
    short int i;
    i = 0;
    while (argv[i]  )
    {
        printf("%s\n", argv[i]);
        i++;
    }
    return (0);
}