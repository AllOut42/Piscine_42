/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:11:27 by ndancoin          #+#    #+#             */
/*   Updated: 2023/09/13 13:01:16 by ndancoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str_h"

struct s_stock_str *ft_str_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == 2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	t_stock_str	*stock;

	if (argc > 1)
	{
		stock = ft_str_to_tab(ac - 1, av[1]);
		while (stock->str)
		{
			ft_putstr(stock->str);
			ft_putchar('\n');
			ft_putnbr(stock->size);
			ft_putchar('\n');
			ft_putstr(stock->copy);
			stock++;
		}
	}	
}
