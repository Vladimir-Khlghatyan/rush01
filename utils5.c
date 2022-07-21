/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:25:39 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/07/18 00:25:49 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	init(int *i, int n)
{
	if (n == 4)
	{
		i[3] = 0;
		i[2] = 0;
		i[1] = 0;
		i[0] = 0;
	}
	else if (n == 3)
	{
		i[3] = 0;
		i[2] = 0;
		i[1] = 0;
		i[0] += 1;
	}
	else if (n == 2)
	{
		i[3] = 0;
		i[2] = 0;
		i[1] += 1;
	}
	else if (n == 1)
		i[3] = 0;
		i[2] += 1;
}

int	**generate_tab(void)
{
	static int	i[4];
	int			**tab;

	tab = (int **)malloc(sizeof(int *) * 5);
	tab[0] = generate_line(i[0]);
	tab[1] = generate_line(i[1]);
	tab[2] = generate_line(i[2]);
	tab[3] = generate_line(i[3]);
	tab[4] = NULL;
	if (i[3] < 23)
		i[3]++;
	else if (i[3] == 23 && i[2] < 23)
		init(i, 1);
	else if (i[3] == 23 && i[2] == 23 && i[1] < 23)
		init(i, 2);
	else if (i[3] == 23 && i[2] == 23 && i[1] == 23 && i[0] < 23)
		init(i, 3);
	return (tab);
}

int	**get_values(int **tab)
{
	int	**values;
	int	i;

	values = (int **)malloc(sizeof(int *) * 5);
	i = -1;
	while (++i < 4)
		values[i] = (int *)malloc(sizeof(int) * 4);
	values[4] = NULL;
	i = -1;
	while (++i < 4)
		values[0][i] = up_to_down(tab, i);
	i = -1;
	while (++i < 4)
		values[1][i] = down_to_up(tab, i);
	i = -1;
	while (++i < 4)
		values[2][i] = left_to_right(tab, i);
	i = -1;
	while (++i < 4)
		values[3][i] = right_to_left(tab, i);
	return (values);
}

int	tabfree2(int **tab1, int **tab2, int **tab3)
{
	if (tab1 != NULL)
		tabfree(tab1);
	if (tab2 != NULL)
		tabfree(tab2);
	if (tab3 != NULL)
		tabfree(tab3);
	return (0);
}
