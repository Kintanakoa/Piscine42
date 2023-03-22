/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:05:12 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/15 13:16:38 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (32 <= str[pos] && str[pos] <= 126)
			pos++;
		else
			return (0);
	}
	return (1);
}
