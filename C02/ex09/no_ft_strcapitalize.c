/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:21:54 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/16 10:28:00 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strlowcase(char *str)
{
	int	p;

	p = 0;
	while (str[p])
	{
		if ('A' <= str[p] && str[p] <= 'Z')
			str[p] = str[p] + 32;
		p++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	p;
	int	a;

	ft_strlowcase(str);
	p = 0;
	while (str[p])
	{
		a = p - 1;
		if (p == 0 && 'a' <= str[p] && str [p] <= 'z')
		{
			str[p] = str[p] - 32;
			p++;
		}
		else if (('a' <= str[p] && str[p] <= 'z')
			&& (!('a' <= str[a] && str[a] <= 'z'))
			|| ('0' <= str[a] && str[a] <= '9'))
		{
			str[p] = str[p] - 32;
			p++;
		}
	p++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
	
	ft_strcapitalize(str);
	printf("%s", ft_strcapitalize (str));
	return (0);
}
*/
