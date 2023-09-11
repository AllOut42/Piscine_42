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

int	check_doublons(int tab[4][4], int a, int undetroicat);

int	bas_haut(int tab[4][4], int a, int parametre[16])
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;
	if (a / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][a % 4] > j)
			{
				j = tab[i][a % 4];
				c++;
			}
			i++;
		}
		if (parametre[a % 4] != c)
			return (1);
	}
	return (0);
}

int	gauche_droite(int tab[4][4], int a, int parametre[16])
{
	int	i;
	int	j;
	int	c;

	i = 4;
	j = 0;
	c = 0;
	if (a % 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab[a / 4][i] > j)
			{
				j = tab[a / 4][i];
				c++;
			}
		}
		if (parametre[12 + a / 4] != c)
			return (1);
	}
	return (0);
}

int	haut_bas(int tab[4][4], int a, int parametre[16])
{
	int	i;
	int	j;
	int	c;

	i = 3;
	j = 0;
	c = 0;
	if (a / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][a % 4] > j)
			{
				j = tab[i][a % 4];
				c++;
			}
			i--;
		}
		if (parametre[4 + a % 4] != c)
			return (1);
	}
	return (0);
}

int	droite_gauche(int tab[4][4], int a, int parametre[16])
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;
	if (a % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[a / 4][i] > j)
			{
				j = tab[a / 4][i];
				c++;
			}
			i++;
		}
		if (parametre[8 + a / 4] != c)
			return (1);
	}
	return (0);
}

int	checkcase(int tab[4][4], int a, int parametre[16])
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
