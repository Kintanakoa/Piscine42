/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:12:39 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/10 13:35:18 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alp;

	alp = 'a';
	while (alp <= 'z')
	{
		write (1, &alp, 1);
		++ alp;
	}	
}
