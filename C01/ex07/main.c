#include<unistd.h>
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	str[] = {1, 2, 4, 7, 9};
	int	size;

	size = 5;
	ft_rev_int_tab(str, size);
	printf("rev= %i, ", str[0]);
	printf("%i, ", str[1]);
	printf("%i, ", str[2]);
	printf("%i, ", str[3]);
	printf("%i\n", str[4]);
	return (0);
}
