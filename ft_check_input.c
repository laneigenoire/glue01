/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtserenb <gtserenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 15:40:30 by gtserenb          #+#    #+#             */
/*   Updated: 2015/09/13 16:16:47 by gtserenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_input(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (argc != 10)
		return (1);
	while (i < argc)
	{
		while (argv[i][j])
			j++;
		if (j != 9)
			return (1);
		j = 0;
		while (argv[i][j] == '.' || (argv[i][j] > '0' && argv[i][j] <= '9'))
			j++;
		if (j != 9)
			return (1);
		j = 0;
		i++;
	}
	if (i != 10)
		return (1);
	else
		return (0);
}
