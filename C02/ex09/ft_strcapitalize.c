/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:21:54 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/16 10:21:07 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i - 1] && str[i - 1] <= 'z')
			a = 1;
		else if ('0' <= str[i - 1] && str[i - 1] <= '9')
			a = 1;
		else if ('A' <= str[i - 1] && str[i - 1] <= 'Z')
			a = 1;
		else
			a = 0;
		if ('A' <= str[i] && str[i] <= 'Z' && a == 1)
			str[i] = str[i] + 32;
		if ('a' <= str[i] && str[i] <= 'z' && a == 0)
			str[i] = str[i] - 32;
		i++;
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
