/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:58:58 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/15 13:00:08 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if ('a' <= str[pos] && str[pos] <= 'z')
			pos++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = {"akdkenej"};

	ft_str_is_lowercase(str);
	printf ("%i", ft_str_is_lowercase(str));
	return (0);
}
*/
