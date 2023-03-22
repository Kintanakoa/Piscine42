/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:14:23 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/10 11:06:35 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	pos_a;
	int	pos_b;

	pos_a = 0;
	while (pos_a < 99)
	{
		pos_b = pos_a + 1;
		while (pos_b <= 99)
		{
			ft_putchar(pos_a / 10 + '0');
			ft_putchar(pos_a % 10 + '0');
			write (1, " ", 1);
			ft_putchar(pos_b / 10 + '0');
			ft_putchar(pos_b % 10 + '0');
			if (!(pos_a == 98 && pos_b == 99))
				write (1, ", ", 2);
		pos_b++;
		}
	pos_a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2 ();
	return (0);
}
*/
