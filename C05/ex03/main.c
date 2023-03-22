#include<stdio.h>

int	main(void)
{
	int	ft_recursive_power(int nb, int power);

	printf("Si nb = (3) y p = (-3), la respuesta es: %d\n", ft_recursive_power(3, -3));
	printf("Si nb = (0) y p = (0), la respuesta es: %d\n", ft_recursive_power(0, 0));
	printf("Si nb = (1), y p = (0), la respuesta es: %d\n", ft_recursive_power(1, 0));
	printf("Si nb = (3), y p = (3), la respuesta es: %d\n", ft_recursive_power(3, 3));
	printf("Si nb = (0), y p = (8), la respuesta es: %d\n", ft_recursive_power(0, 8));
	printf("Si nb = (5), y p = (8), la respuesta es: %d\n", ft_recursive_power(5, 8));
	printf("Si nb = (-5), y p = (8), la respuesta es: %d\n", ft_recursive_power(-5, 8));
	printf("Si nb = (13), y p = (3), la respuesta es: %d\n", ft_recursive_power(13, 3));
	printf("Si nb = (-13), y p = (3), la respuesta es: %d\n", ft_recursive_power(-13, 3));
}	
