void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int test;
    int *test1;

    test = 5;
    test1 = &test;

    ft_ft(test1);
    return (0);
}