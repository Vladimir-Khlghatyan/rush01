/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:25:39 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/07/18 00:25:49 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	left_to_right(int **tab, int row)
{
	if (tab[row][0] == 4)
		return (1);
	if (tab[row][0] == 3)
		return (2);
	if (tab[row][0] == 2)
	{
		if (tab[row][1] == 4 || (tab[row][1] == 1 && tab[row][2] == 4))
			return (2);
		return (3);
	}
	if (tab[row][0] == 1)
	{
		if (tab[row][1] == 2 && tab[row][2] == 3 && tab[row][3] == 4)
			return (4);
		else if (tab[row][1] == 4)
			return (2);
		return (3);
	}
	return (0);
}

int	right_to_left(int **tab, int row)
{
	if (tab[row][3] == 4)
		return (1);
	if (tab[row][3] == 3)
		return (2);
	if (tab[row][3] == 2)
	{
		if (tab[row][2] == 4 || (tab[row][2] == 1 && tab[row][1] == 4))
			return (2);
		return (3);
	}
	if (tab[row][3] == 1)
	{
		if (tab[row][2] == 2 && tab[row][1] == 3 && tab[row][0] == 4)
			return (4);
		else if (tab[row][2] == 4)
			return (2);
		return (3);
	}
	return (0);
}

int	up_to_down(int **tab, int column)
{
	if (tab[0][column] == 4)
		return (1);
	if (tab[0][column] == 3)
		return (2);
	if (tab[0][column] == 2)
	{
		if (tab[1][column] == 4 || (tab[1][column] == 1 && tab[2][column] == 4))
			return (2);
		return (3);
	}
	if (tab[0][column] == 1)
	{
		if (tab[1][column] == 2 && tab[2][column] == 3 && tab[3][column] == 4)
			return (4);
		else if (tab[1][column] == 4)
			return (2);
		return (3);
	}
	return (0);
}

int	down_to_up(int **tab, int column)
{
	if (tab[3][column] == 4)
		return (1);
	if (tab[3][column] == 3)
		return (2);
	if (tab[3][column] == 2)
	{
		if (tab[2][column] == 4 || (tab[2][column] == 1 && tab[1][column] == 4))
			return (2);
		return (3);
	}
	if (tab[3][column] == 1)
	{
		if (tab[2][column] == 2 && tab[1][column] == 3 && tab[0][column] == 4)
			return (4);
		else if (tab[2][column] == 4)
			return (2);
		return (3);
	}
	return (0);
}
