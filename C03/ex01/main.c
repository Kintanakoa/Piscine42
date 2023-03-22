#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	leftStr[] = "bfb";
	char	rightStr [] = "bfba";

	int ft_res = ft_strncmp(leftStr, rightStr, 4);
	int	res = strncmp(leftStr, rightStr, 4);
	printf("\nEl valor de mi ft_strncmp() es: %d", ft_res);
	printf("\nEl valor de strncmp() es: %d", res);
	return (0);
}
