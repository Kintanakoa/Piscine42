/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:13:15 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/20 14:40:41 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (('A' <= str[pos] && str[pos] <= 'Z')
			|| ('a' <= str[pos] && str[pos] <= 'z'))
			pos++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char str[] = {"holacaracola"};

	ft_str_is_alpha(str);
	printf ("%i", ft_str_is_alpha(str));
	return (0);
}

