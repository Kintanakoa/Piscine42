/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:33:39 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/18 13:11:55 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	p;
	int	f;

	p = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[p] != '\0')
	{
		if (str[p] == *to_find)
		{
			f = 0;
			while (str[p + f] && to_find[f] && str[p + f] == to_find[f])
				f++;
			if (!to_find[f])
				return (&str[p]);
		}
		p++;
	}
	return (0);
}
