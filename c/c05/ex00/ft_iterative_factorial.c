/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:42:13 by ndancoin          #+#    #+#             */
/*   Updated: 2023/09/07 16:04:52 by ndancoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	max;

	i = 1;
	max = nb - 1;
	if (nb == 0)
		return (1);
	while (i <= max)
	{
		nb = nb * i;
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d\n", ft_iterative_factorial(nb));
	return (0);
}*/
