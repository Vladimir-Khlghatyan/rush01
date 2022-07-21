/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:24:26 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/07/18 00:24:36 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char **argv)
{
	int	**args;
	int	**tab;
	int	**values;
	int	i;

	if (argc - 1 != 1 || ft_strlen(argv[1]) != 31 || !checking_args(argv[1]))
		return (write(1, "Error\n", 6));
	args = parsing_args(argv[1]);
	i = -1;
	while (++i < (4 * 3 * 2) * (4 * 3 * 2) * (4 * 3 * 2) * (4 * 3 * 2))
	{
		tab = generate_tab();
		if (!check_tab(tab))
			continue ;
		values = get_values(tab);
		if (compare_tabs(values, args))
		{	
			print_tab(tab);
			return (tabfree2(tab, values, args));
		}
		tabfree2(tab, values, NULL);
	}
	tabfree2(args, NULL, NULL);
	return (write(1, "Error\n", 6));
}
