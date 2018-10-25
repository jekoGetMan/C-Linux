#include <unistd.h>

void ft_putchar(char display)
{
    write(1, &display, 1);
}

void ft_putstr(char *str)
{
    int i;

    i=0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

void ft_sort(char **str, int size)
{
    int i;
    int j;
    char *tmp;

    while (i < size - 1)
    {
        j = 1;
        while (j < size - 1)
        {
            if (ft_strcmp(str[j], str[j + 1]) > 0)
            {
                tmp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        ft_sort(argv, argc);
        argc = 0;
        while (argv[++argc])
        {
            ft_putstr(argv[argc]);
            ft_putchar('\n');
        }

    }
    return (0);
}


