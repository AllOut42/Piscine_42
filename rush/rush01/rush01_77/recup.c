/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:21:59 by ndancoin          #+#    #+#             */
/*   Updated: 2023/09/03 20:37:44 by ndancoin         ###   ########.fr       */
/*   Updated: 2023/09/03 17:15:27 by jeguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_atoi(char *str);

int	ft_strlen(char *str);

int	*recup(char *str)
{
	int	i;
	int	*tab;

	tab = (int *)malloc(sizeof(int) * 49);
	if (tab == 0)
		return (0);
	i = 0;
	while (i <= 55)
	{
		tab[i / 2] = str[i] - 48;
		i++;
		i++;
	}
	return (tab);
}

int	checkparametre(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	if (ft_strlen(argv[1]) != 55)
		return (1);
	return (0);
}
