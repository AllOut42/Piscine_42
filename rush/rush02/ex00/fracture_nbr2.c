/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fracture_nbr2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolonna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:38:38 by mcolonna          #+#    #+#             */
/*   Updated: 2023/09/10 21:46:12 by mcolonna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_result.h"
#include "dict.h"

int			my_strlen(char *str);
t_result	remove_first_zeros(char **str_dest);
t_result	write_word(t_dict dico, char *str);
t_result	fracture_nbr_loop(t_dict dico, char *digit, int *i,
				int *empty_group);

t_result	fracture_nbr(t_dict dico, char *str)
{
	int		len;
	int		i;
	int		empty_group;

	remove_first_zeros(&str);
	len = my_strlen(str);
	if (len > 38)
		return (ERROR);
	if (len == 1 && str[0] == '0')
		write_word(dico, "0");
	i = len - 1;
	empty_group = 1;
	while (i >= 0)
	{
		if (!fracture_nbr_loop(dico, str + (len - i - 1), &i, &empty_group))
			return (ERROR);
		i--;
	}
	return (SUCCESS);
}
