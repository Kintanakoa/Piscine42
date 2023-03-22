/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:19:51 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/15 13:30:24 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>
*/
char	*ft_strlowcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if ('A' <= str[pos] && str[pos] <= 'Z')
			str[pos] = str[pos] + 32;
		pos++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str [] = {"Hola, Caracola"};

	ft_strlowcase(str);
	printf("%s", ft_strlowcase(str));
	return (0);
}
*/
