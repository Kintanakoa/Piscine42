/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:53:38 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/08 14:26:37 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	rev;

	rev = 'z';
	while ((rev <= 'z') && (rev >= 'a'))
	{
		write (1, &rev, 1);
		rev--;
	}
}
