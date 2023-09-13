/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:28:48 by ndancoin          #+#    #+#             */
/*   Updated: 2023/09/13 19:56:54 by ndancoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	char	*buffer;
	int		i;

	buffer = (char *)malloc(sizeof((*str) * ft_strlen(str) + 1));
	if (!buffer)
		return (0);
	dest = buffer;
	i = 0;
	while (str[i])
	{
		buffer[i] = str[i];
		i++;
	}
	buffer[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_str_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	stock = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!stock)
		return (0);
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].str = 0;
	stock[i].copy = 0;
	return (stock);
}
