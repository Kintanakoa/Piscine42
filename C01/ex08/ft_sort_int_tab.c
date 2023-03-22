/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:51:02 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/12 20:56:41 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	pos;
	int	pos_comp;
	int	count;
	int	temp;

	count = 0;
	while (count < size)
	{
		pos = 0;
		while (pos < (size - 1))
		{
			pos_comp = pos + 1;
			if (tab[pos] > tab [pos_comp])
			{
				temp = tab[pos];
				tab [pos] = tab [pos_comp];
				tab [pos_comp] = temp;
			}
			pos++;
		}
		count++;
	}
}
/* //Para comprobar, copiar en CTutor//
int	main(void)
{
	int	str[] = {0, 9, 2, 8, 3, 5};

	ft_sort_int_tab(str, 6);
	return (0);
}
*/
