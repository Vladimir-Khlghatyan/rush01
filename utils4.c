/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:25:39 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/07/18 00:25:49 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	*fill(int a, int b, int c, int d)
{
	int	*tab;

	tab = (int *)malloc(sizeof(int) * 4);
	tab[0] = a;
	tab[1] = b;
	tab[2] = c;
	tab[3] = d;
	return (tab);
}

int	*generate1(int i)
{
	if (i == 0)
		return (fill(1, 2, 3, 4));
	else if (i == 1)
		return (fill(1, 2, 4, 3));
	else if (i == 2)
		return (fill(1, 3, 2, 4));
	else if (i == 3)
		return (fill(1, 3, 4, 2));
	else if (i == 4)
		return (fill(1, 4, 2, 3));
	else if (i == 5)
		return (fill(1, 4, 3, 2));
	else if (i == 6)
		return (fill(2, 1, 3, 4));
	else if (i == 7)
		return (fill(2, 1, 4, 3));
	return (NULL);
}

int	*generate2(int i)
{
	if (i == 8)
		return (fill(2, 3, 1, 4));
	else if (i == 9)
		return (fill(2, 3, 4, 1));
	else if (i == 10)
		return (fill(2, 4, 1, 3));
	else if (i == 11)
		return (fill(2, 4, 3, 1));
	else if (i == 12)
		return (fill(3, 1, 2, 4));
	else if (i == 13)
		return (fill(3, 1, 4, 2));
	else if (i == 14)
		return (fill(3, 2, 1, 4));
	else if (i == 15)
		return (fill(3, 2, 4, 1));
	return (NULL);
}

int	*generate3(int i)
{
	if (i == 16)
		return (fill(3, 4, 1, 2));
	else if (i == 17)
		return (fill(3, 4, 2, 1));
	else if (i == 18)
		return (fill(4, 1, 2, 3));
	else if (i == 19)
		return (fill(4, 1, 3, 2));
	else if (i == 20)
		return (fill(4, 2, 1, 3));
	else if (i == 21)
		return (fill(4, 2, 3, 1));
	else if (i == 22)
		return (fill(4, 3, 1, 2));
	else if (i == 23)
		return (fill(4, 3, 2, 1));
	return (NULL);
}

int	*generate_line(int i)
{
	if (i < 8)
		return (generate1(i));
	else if (i < 16)
		return (generate2(i));
	else if (i < 24)
		return (generate3(i));
	return (NULL);
}
