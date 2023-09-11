/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:35:39 by ndancoin          #+#    #+#             */
/*   Updated: 2023/08/31 11:14:54 by ndancoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[50] = "Salut ";
	char s2[] = "les piscineux";

	char s3[50] = "Salut ";
	char s4[] = "les piscineux";

	printf("Real strcat = %s\n", strcat(s1, s2));
	printf("ft_strcat = %s\n", ft_strcat(s3, s4));
}*/
