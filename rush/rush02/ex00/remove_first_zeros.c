/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_first_zeros.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:22:03 by ndancoin          #+#    #+#             */
/*   Updated: 2023/09/10 21:47:08 by mcolonna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "t_result.h"

int	my_strlen(char *str);

t_result	remove_first_zeros(char **str_dest)
{
	char	*str_cpy;
	int		i;
	int		j;
	char	*str;

	str = *str_dest;
	str_cpy = (char *)malloc(sizeof(char) * (my_strlen(str) + 1));
	if (!str_cpy)
		return (ERROR);
	i = 0;
	j = 0;
	while (str[i] == '0')
		i++;
	while (str[i])
	{
		str_cpy[j] = str[i];
		i++;
		j++;
	}
	if (j == 0)
		str_cpy[j++] = '0';
	str_cpy[j] = '\0';
	str = str_cpy;
	*str_dest = str;
	return (SUCCESS);
}
