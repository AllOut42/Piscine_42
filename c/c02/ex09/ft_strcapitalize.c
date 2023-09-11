/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:57:13 by ndancoin          #+#    #+#             */
/*   Updated: 2023/08/27 18:05:54 by ndancoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] >= 'a' && str[i - 1] <= 'z' && i - 1 == 0)
			str[i - 1] -= 32;
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
		{
			if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			{
				if (str[i] >= 'a' && str[i] <= 'z') 
				{
					if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "salut, coMMent tu vAs ? 42mOts quArAnTe-dEux; cinQuante+et+un";
	ft_putstr("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\n");
	ft_putstr(ft_strcapitalize(c));
}*/
