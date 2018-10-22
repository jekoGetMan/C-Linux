/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypavlenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:05:59 by ypavlenk          #+#    #+#             */
/*   Updated: 2018/10/22 17:06:16 by ypavlenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char display)
{
    write(1, &display, 1);
}

void ft_print_numbers(void)
{
    char number;

    number = '0';
    while (i < '9')
    {
        ft_putchar(i);
        number++;
    }
}

int main(void)
{
    ft_print_numbers();
    return (0);
}

