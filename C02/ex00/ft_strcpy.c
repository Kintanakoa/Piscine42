/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:09:14 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/15 10:40:26 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	pos;

	pos = 0;
	while (src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
	return (dest);
}
