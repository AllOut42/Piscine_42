/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcolonna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 12:55:27 by mcolonna          #+#    #+#             */
/*   Updated: 2023/09/10 22:13:48 by mcolonna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "t_result.h"
#include <unistd.h>

t_result	dict_create(char *file, t_dict *dest);
t_result	get_dict_value(t_dict dict, char *key, char **dest);
t_result	fracture_nbr(t_dict dico, char *nbr);

int	is_digits(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_dict	dict;
	char	*dict_file;
	char	*nbr;

	if (argc < 2 || argc > 3)
		return (1);
	if (argc == 2)
	{
		dict_file = "numbers.dict";
		nbr = argv[1];
	}
	else
	{
		dict_file = argv[1];
		nbr = argv[2];
	}
	if (!is_digits(nbr))
		write(2, "Error\n", 6);
	else if (!dict_create(dict_file, &dict)
		|| !fracture_nbr(dict, nbr))
		write(2, "Dict Error\n", 11);
	else
		write(1, "\n", 1);
	return (0);
}
