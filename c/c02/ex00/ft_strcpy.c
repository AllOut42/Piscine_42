/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:04:57 by ndancoin          #+#    #+#             */
/*   Updated: 2023/08/28 18:40:55 by ndancoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char *src = "Hello, world!";
	char dest[20];

	printf("String to be copied :\n\n%s\n", src);
	printf("\n----------\n\n");
	ft_strcpy(dest, src);
	printf("Destination buffer :\n\n%s", dest);
}*/
