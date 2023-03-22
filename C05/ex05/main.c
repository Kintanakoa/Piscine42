#include<stdio.h>

int	main(void)
{
	int ft_sqrt(int nb);

	printf("Según Newton, la raiz cuadrada de (-3) es: %d\n", ft_sqrt(-3));
	printf("Según Newton, la raiz cuadrada de (0) es: %d\n", ft_sqrt(0));
	printf("Según Newton, la raiz cuadrada de (1) es: %d\n", ft_sqrt(1));
	printf("Según Newton, la raiz cuadrada de (2) es: %d\n", ft_sqrt(2));
	printf("Según Newton, la raiz cuadrada de (5) es: %d\n", ft_sqrt(5));
	printf("Según Newton, la raiz cuadrada de (9) es: %d\n", ft_sqrt(9));
	printf("Según Newton, la raiz cuadrada de (144) es: %d\n", ft_sqrt(144));
	printf("Según Newton, la raiz cuadrada de (1944810000) es: %d\n", ft_sqrt(1944810000));
	printf("Según Newton, la raiz cuadrada de (2147483647) es: %d\n", ft_sqrt(2147483647));
}
