/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:36:12 by ndancoin          #+#    #+#             */
/*   Updated: 2023/09/07 16:02:24 by ndancoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	printf("Nombre : ");
	scanf("%d", &nb);
	printf("Puissance : ");
	scanf("%d", &power);

	printf("%d\n", ft_iterative_power(nb, power));
	main();
	return (0);
}*/
