/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_her.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:37:02 by ndancoin          #+#    #+#             */
/*   Updated: 2023/09/03 21:15:00 by ndancoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_doublons(int tab[7][7], int a, int undetroicat);

int	bas_haut(int tab[7][7], int a, int parametre[49])
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;
	if (a / 7 == 6)
	{
		while (i < 7)
		{
			if (tab[i][a % 7] > j)
			{
				j = tab[i][a % 7];
				c++;
			}
			i++;
		}
		if (parametre[a % 7] != c)
			return (1);
	}
	return (0);
}

int	gauche_droite(int tab[7][7], int a, int parametre[49])
{
	int	i;
	int	j;
	int	c;

	i = 7;
	j = 0;
	c = 0;
	if (a % 7 == 6)
	{
		while (--i >= 0)
		{
			if (tab[a / 7][i] > j)
			{
				j = tab[a / 7][i];
				c++;
			}
		}
		if (parametre[21 + a / 7] != c)
			return (1);
	}
	return (0);
}

int	haut_bas(int tab[7][7], int a, int parametre[49])
{
	int	i;
	int	j;
	int	c;

	i = 6;
	j = 0;
	c = 0;
	if (a / 7 == 6)
	{
		while (i >= 0)
		{
			if (tab[i][a % 7] > j)
			{
				j = tab[i][a % 7];
				c++;
			}
			i--;
		}
		if (parametre[7 + a % 7] != c)
			return (1);
	}
	return (0);
}

int	droite_gauche(int tab[7][7], int a, int parametre[49])
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;
	if (a % 7 == 6)
	{
		while (i < 7)
		{
			if (tab[a / 7][i] > j)
			{
				j = tab[a / 7][i];
				c++;
			}
			i++;
		}
		if (parametre[14 + a / 7] != c)
			return (1);
	}
	return (0);
}

int	checkcase(int tab[7][7], int a, int parametre[49])
{
	if (droite_gauche(tab, a, parametre) == 1)
		return (1);
	if (gauche_droite(tab, a, parametre) == 1)
		return (1);
	if (haut_bas(tab, a, parametre) == 1)
		return (1);
	if (bas_haut(tab, a, parametre) == 1)
		return (1);
	return (0);
}
