/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:25:39 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/07/18 00:25:49 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_tab(int **tab)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (tab[0][i] == tab[1][i] || tab[0][i] == tab[2][i] || \
			tab[0][i] == tab[3][i] || tab[1][i] == tab[2][i] || \
			tab[1][i] == tab[3][i] || tab[2][i] == tab[3][i])
			return (tabfree(tab));
	}
	return (1);
}

int	compare_tabs(int **tab1, int **tab2)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			if (tab1[i][j] != tab2[i][j])
				return (0);
	}
	return (1);
}

void	print_tab(int **tab)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_put_unsigned_nmb(tab[i][j]);
			if (j == 3)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
		}
	}
}
