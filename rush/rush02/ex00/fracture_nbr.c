/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fracture_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolonna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:03:37 by mcolonna          #+#    #+#             */
/*   Updated: 2023/09/10 21:57:55 by mcolonna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "t_result.h"
#include "dict.h"

int			my_strlen(char *str);
char		*remove_first_zeros(char *str);
t_result	get_dict_value(t_dict dict, char *key, char **dest);

int	g_was_something_wrote = 0;

t_result	write_word(t_dict dico, char *key)
{
	char	*str;

	if (!get_dict_value(dico, key, &str))
		return (ERROR);
	if (g_was_something_wrote)
		write(1, " ", 1);
	g_was_something_wrote = 1;
	write(1, str, my_strlen(str));
	return (SUCCESS);
}

t_result	write_digit(t_dict dict, char key)
{
	char	str[2];

	str[0] = key;
	str[1] = '\0';
	return (write_word(dict, str));
}

t_result	write_digit_with_n_zeros(t_dict dict, char c, int n)
{
	int			i;
	char		*dest;
	t_result	r;

	dest = malloc((n + 2) * sizeof(char));
	dest[0] = c;
	i = 1;
	while (i <= n)
	{
		dest[i] = '0';
		i++;
	}
	dest[i] = '\0';
	r = write_word(dict, dest);
	free(dest);
	return (r);
}

t_result	tens(t_dict dico, char *digit, int *i)
{
	char	tmp[3];

	if (*digit == '1')
	{
		tmp[0] = *digit;
		tmp[1] = digit[1];
		tmp[2] = '\0';
		(*i)--;
		return (write_word(dico, tmp));
	}
	else
		return (write_digit_with_n_zeros(dico, *digit, 1));
}

t_result	fracture_nbr_loop(
	t_dict dico, char *digit, int *i, int *empty_group)
{
	if (*i % 3 == 0 && *digit != '0')
		if (!write_digit(dico, *digit))
			return (ERROR);
	if (*i % 3 == 1 && *digit != '0')
		if (!tens(dico, digit, i))
			return (ERROR);
	if (*i % 3 == 2 && *digit != '0')
		if (!write_digit(dico, *digit)
			|| !write_word(dico, "100")
		)
			return (ERROR);
	if (*digit != '0')
		*empty_group = 0;
	if (*i % 3 == 0 && !*empty_group && *i != 0)
	{
		if (!write_digit_with_n_zeros(dico, '1', *i))
			return (ERROR);
		*empty_group = 1;
	}
	return (SUCCESS);
}
