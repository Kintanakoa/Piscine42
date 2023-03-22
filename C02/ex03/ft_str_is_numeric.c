/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:54:07 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/15 12:32:14 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if ('0' <= str[pos] && str[pos] <= '9')
			pos++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char srt[] = {"1234567"};

	ft_str_is_numeric(srt);
	printf ("%i", ft_str_is_numeric(srt));
	return (0);
}
*/
