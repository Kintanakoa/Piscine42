/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:48:26 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/15 10:47:53 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	pos;

	pos = 0;
	while (src[pos] && (pos < n))
	{
		dest[pos] = src[pos];
		pos++;
	}
	while (pos < n)
	{
		dest[pos] = '\0';
		pos++;
	}	
	return (dest);
}
