/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtserenb <gtserenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 14:43:25 by gtserenb          #+#    #+#             */
/*   Updated: 2015/09/13 17:03:56 by gtserenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		solve(char **tab, int x, int y);
void	ft_print_sudoku(char **tab);
void	ft_putchar(char c);
int		ft_check_input(int argc, char **argv);
void	ft_putnbr(char c);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	if (solve(argv + 1, 0, 0))
	{
		ft_print_sudoku(argv);
	}
	else
		ft_putstr("Error: no solution\n");
	return (0);
}
