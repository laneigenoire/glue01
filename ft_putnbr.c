/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtserenb <gtserenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 16:54:34 by gtserenb          #+#    #+#             */
/*   Updated: 2015/09/13 16:57:38 by gtserenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int n)
{
	int		i;
	int		vect[20];
	long	nb;

	nb = n;
	i = -1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == 0)
		ft_putchar('0');
	while (nb > 0)
	{
		i++;
		vect[i] = nb % 10;
		nb = nb / 10;
	}
	while (i > -1)
	{
		ft_putchar('0' + vect[i]);
		i--;
	}
}
