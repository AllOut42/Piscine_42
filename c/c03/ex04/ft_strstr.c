/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:46:42 by ndancoin          #+#    #+#             */
/*   Updated: 2023/08/31 15:07:25 by ndancoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stddef.h>
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[j] != '\0')
	{
		if (str[j] == to_find[0])
		{
			i = 0;
			while (to_find[i] != '\0' && str[j + i] == to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (str + j);
		}
		j++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int     main(void)
{
        char    str[] = "Bonjour je suis une pantoufle";
        char    to_find[] = "";

        printf("Modele : %s\n", strstr(str, to_find));
        printf("Result : %s\n", ft_strstr(str, to_find));
}*/
