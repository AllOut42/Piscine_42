/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:32:31 by ndancoin          #+#    #+#             */
/*   Updated: 2023/09/06 13:22:14 by ndancoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
	{
		ptr = 0;
		return (ptr);
	}
	ptr = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}

/*
#include <stdio.h>

int    main(void)
{
    int *range;

    range = ft_range(0, 5);
    printf("Test 1: | [0, 1, 2] : %d, %d, %d\n", range[0], range[1], range[2]);
    range = ft_range(3, 3);
    printf("Test 2: si min >= max");
    if (range == NULL)
        printf(" | Aucun resultat, c'est bon !\n");
    else
        printf("Perdu !\n");

    range = ft_range(-1, 1);
    printf("Test 3: | [-1, 0] : %d, %d\n", range[0], range[1]);
}*/
