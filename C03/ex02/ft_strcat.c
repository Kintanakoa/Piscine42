/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:09:42 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/17 14:24:46 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	pd;
	int	ps;

	pd = 0;
	ps = 0;
	while (dest[pd])
	{
		pd++;
	}
	while (src[ps])
	{
		dest[pd] = src[ps];
		pd++;
		ps++;
	}
	dest[pd] = '\0';
	return (dest);
}
