/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:57:40 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/17 13:09:51 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	ps;
	unsigned int	pd;

	ps = 0;
	pd = 0;
	while (dest[pd])
	{
		pd++;
	}
	while (src[ps] && ps < nb)
	{
		dest[pd] = src[ps];
		ps++;
		pd++;
	}
	dest[pd] = '\0';
	return (dest);
}
