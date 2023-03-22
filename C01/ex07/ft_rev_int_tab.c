/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:33:50 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/14 13:50:37 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	pos;

	pos = 0;
	while (pos < size)
	{
		size--;
		temp = tab[pos];
		tab [pos] = tab [size];
		tab [size] = temp;
		pos++;
	}
}
