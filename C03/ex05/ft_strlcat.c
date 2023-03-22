/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:36:05 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/17 13:31:25 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	p;
	unsigned int	c;
	unsigned int	total;

	p = 0;
	while (dest[p] != '\0')
		p++;
	c = 0;
	while (src[c] != '\0')
		c++;
	total = c;
	if (size <= p)
		total = total + size;
	else
		total = total + p;
	c = 0;
	while (src[c] != '\0' && p + 1 < size)
	{
		dest[p] = src[c];
		p++;
		c++;
	}
	dest[p] = '\0';
	return (total);
}
