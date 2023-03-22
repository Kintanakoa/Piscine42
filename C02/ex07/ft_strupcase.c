/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:09:07 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/15 13:25:45 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>
*/
char	*ft_strupcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if ('a' <= str[pos] && str[pos] <= 'z')
			str[pos] = str[pos] - 32;
		pos++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str [] = {"Hola, Caracola"};

	ft_strupcase(str);
	printf("%s", ft_strupcase(str));
	return (0);
}
*/
