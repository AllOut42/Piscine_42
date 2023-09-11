/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:37:33 by ndancoin          #+#    #+#             */
/*   Updated: 2023/09/11 20:02:12 by ndancoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	printf("donne une valeur : ");
	scanf("%d", &nb);
	if (nb < 0)
	{
		printf("pas en-dessous de 0 banane... je suis gentil, recommence... re");
		main();
	}
	printf("%d\n%s", ft_recursive_factorial(nb), "encore ? Non ? --> CTRL + C\n");
	main();
	return (0);
}*/
