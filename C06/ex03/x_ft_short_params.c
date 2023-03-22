/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-kint <ade-kint@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:54:35 by ade-kint          #+#    #+#             */
/*   Updated: 2023/02/20 14:49:04 by ade-kint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	cont;

	cont = 0;
	while (s1[cont] == s2[cont] && s1[cont] != '\0' && s2[cont] != '\0')
	{
		cont++;
	}
	return (s1[cont] - s2[cont]);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	c;

	c = 1;
	while (c < argc)
	{
		i = 0;
		while (argv[c][i] != '\0')
		{
			write (1, &argv[c][i], 1);
			i++;
		}
		write (1, "\n", 1 );
		c++;
	}
}

int	main(int argc, char **argv)
{
	int	rep;
	int	p;
	char	*n;

	rep = 1;
	while (rep < argc) //Mientras las repeticiones sean menos que el número de argumentos
	{
		p = 1;// Empezamos en el argumento uno
		while (p < argc - 1) //Mientras que la cuenta de los contadores sea menor que el máximo que hay (sin contar el 0)
		{
			if (ft_strcmp(argv[p], argv[p + 1]) > 0) //Si al compararlos con strcmp, nos da un número mayor que 0, significa que el primer caracter diferente entre los dos tiene un valor mayor. Así que hazme un swap.
			{
				n = argv[p];
				argv[p] = argv[p + 1];
				argv[p + 1] = n;
			}
			p++;
		}
		rep++;
	}
	ft_print_params(argc, argv);// Imprímeme el resultado
	return (0);
}
