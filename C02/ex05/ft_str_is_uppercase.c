/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:02:35 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/15 13:12:33 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (65 <= str[pos] && str[pos] <= 90)
			pos++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = {"AKDjdJdKELMK"};

	ft_str_is_uppercase(str);
	printf ("%i", ft_str_is_uppercase(str));
	return (0);
}
*/
