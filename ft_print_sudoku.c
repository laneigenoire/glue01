/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sudoku.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtserenb <gtserenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 15:19:09 by gtserenb          #+#    #+#             */
/*   Updated: 2015/09/13 16:18:09 by gtserenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_sudoku(char **tab)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (i < 10)
	{
		while (j < 9)
		{
			ft_putchar(tab[i][j]);
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
