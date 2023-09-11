/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndancoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:21:09 by ndancoin          #+#    #+#             */
/*   Updated: 2023/09/03 21:29:32 by ndancoin         ###   ########.fr       */
/*   Updated: 2023/09/03 17:12:22 by jeguerin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		checkparametre(int argc, char **argv);
int		*recup(char *str);
int		checkcase(int tab[4][4], int a, int parametre[16]);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

int	check_doublons(int tab[4][4], int a, int undetroicat)
{
	int	i;

	i = 0;
	while (i < a / 4)
	{
		if (tab[i][a % 4] == undetroicat)
			return (1);
		i++;
	}
	i = 0;
	while (i < a % 4)
	{
		if (tab[a / 4][i] == undetroicat)
			return (1);
		i++;
	}
	return (0);
}

int	resoudre(int tab[4][4], int parametre[16], int a)
{
	int	taille;

	if (a == 16)
		return (1);
	taille = 0;
	while (++taille <= 4)
	{
		if (check_doublons(tab, a, taille) == 0)
		{
			tab[a / 4][a % 4] = taille;
			if (checkcase(tab, a, parametre) == 0)
			{
				if (resoudre(tab, parametre, a + 1) == 1)
					return (1);
			}
			else
				tab[a / 4][a % 4] = 0;
		}
	}
	return (0);
}

void	affichage(int tab[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(tab[i][j]);
			if (j < 3)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int	*parametre;
	int	tab[4][4];
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			tab[i][j] = 0;
	}
	if (checkparametre(argc, argv) == 1)
	{
		write(2, "Erreur, parametre invalide\n", 27);
		return (0);
	}
	parametre = recup(argv[1]);
	if (resoudre(tab, parametre, 0) == 1)
		affichage(tab);
	else
		write(1, "Error\n", 6);
	return (0);
}
