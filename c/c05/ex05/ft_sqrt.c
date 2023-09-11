/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:15:08 by ndancoin          #+#    #+#             */
/*   Updated: 2023/09/11 19:15:34 by ndancoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (i == nb)
		return (nb);
	if (nb >= 0)
	{
		while (i * i < nb && i < 46341)
			i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 2147395600;
	printf("%d\n", ft_sqrt(nb));
	return (0);
}*/
