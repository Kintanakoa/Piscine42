/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:59:54 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/16 10:59:22 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>
*/
unsigned int	ft_strlen(char *str)
{
	unsigned int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	p;
	unsigned int	l;

	p = 0;
	l = ft_strlen(src);
	if (size == 0)
		return (l);
	while (src[p] != '\0' && p < size - 1)
	{
		dest[p] = src[p];
		p++;
	}
	dest[p] = '\0';
	return (l);
}
/*
int main (void)
{
	char			dest[512];
	char 			source[] = "hola, caracola";
	unsigned int	length;
	length = ft_strlcpy(dest, source, sizeof(source)-5);
	printf("src: %s\ndst: %s\nlength:%i\n", source, dest, length);
	return (0);
}
*/
