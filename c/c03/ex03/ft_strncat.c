/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:27:26 by ndancoin          #+#    #+#             */
/*   Updated: 2023/08/31 11:20:33 by ndancoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[50] = "Bonjour les ";
	char	s2[] = "idiots";
	unsigned int	nb = 2;

	char    s3[50] = "Bonjour les ";
        char    s4[] = "idiots";
	unsigned int	nb1 = 2;

	printf("strncat = %s\n", strncat(s1, s2, nb));
	printf("strncat = %s\n", ft_strncat(s3, s4, nb1));
}*/
