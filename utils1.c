/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:25:39 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/07/18 00:25:49 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	ft_put_unsigned_nmb(unsigned int n)
{
	int	remainder[10];
	int	i;

	i = 0;
	if (n == 0)
		write(1, "0", 1);
	else
	{	
		while (n != 0)
		{
			remainder[i++] = n % 10;
			n /= 10;
		}
		while (--i >= 0)
			write(1, &"0123456789"[remainder[i]], 1);
	}
}

int	checking_args(char *str)
{
	int	i;

	i = -1;
	if (!str)
		return (0);
	while (str[++i])
	{
		if (str[i] != ' ' && (str[i] < '1' || str[i] > '4'))
			return (0);
	}
	return (1);
}

int	**parsing_args(char *str)
{
	int	**tab;
	int	i;
	int	row;
	int	column;

	tab = (int **)malloc(sizeof(int *) * 5);
	i = -1;
	row = -1;
	while (++row < 4)
	{
		tab[row] = (int *)malloc(sizeof(int) * 4);
		column = -1;
		while (++column < 4)
			tab[row][column] = str[++i * 2] - '0';
	}
	tab[4] = NULL;
	return (tab);
}

int	tabfree(int **tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
	return (0);
}
