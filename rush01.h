/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:25:05 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/07/18 00:25:18 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

/* utils1.c */
int		ft_strlen(char *str);
void	ft_put_unsigned_nmb(unsigned int n);
int		checking_args(char *str);
int		**parsing_args(char *str);
int		tabfree(int **tab);

/* utils2.c */
int		left_to_right(int **tab, int row);
int		right_to_left(int **tab, int row);
int		up_to_down(int **tab, int column);
int		down_to_up(int **tab, int column);

/* utils3.c */
int		check_tab(int **tab);
int		compare_tabs(int **tab1, int **tab2);
void	print_tab(int **tab);

/* utils4.c */
int		*fill(int a, int b, int c, int d);
int		*generate1(int i);
int		*generate2(int i);
int		*generate3(int i);
int		*generate_line(int i);

/* utils5.c */
void	init(int *i, int n);
int		**generate_tab(void);
int		**get_values(int **tab);
int		tabfree2(int **tab1, int **tab2, int **tab3);

#endif
