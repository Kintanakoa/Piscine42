/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:08:30 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/23 13:06:27 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int			e;
	long int	x;
	int			y;

	e = 1;
	x = nb;
	y = 1;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	while ((x - y) > e)
	{
		x = (x + y) / 2;
		y = nb / x;
	}
	if (nb == x * x)
		return (x);
	else
		return (0);
}
