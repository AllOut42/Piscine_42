/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:20:48 by ndancoin          #+#    #+#             */
/*   Updated: 2023/09/07 20:36:26 by ndancoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb >= 2)
	{
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb + 1;
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(i) == 0)
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	printf("nb : ");
	scanf("%d", &nb);
	printf("%d\n", ft_find_next_prime(nb));
	main();
	return (0);
}*/
