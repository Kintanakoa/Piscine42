/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:53:46 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/19 18:32:05 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int	c;
	int	i;

	c = argc - 1;
	if (argc > 1)
	{
		while (c > 0)
		{
			i = 0;
			while (argv[c][i] != '\0')
			{
				write (1, &argv[c][i], 1);
				i++;
			}
			write (1, "\n", 1);
			c--;
		}
	}
	return (0);
}
