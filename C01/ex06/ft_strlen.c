/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:13:01 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/21 21:11:56 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}
/*
int	main(void)
{
	char str[] = {'h', 'o'};
	int count = ft_strlen (&str[0]);

	count = count + '0';
	write(1, &count, 1);
	return(0);
}
*/
