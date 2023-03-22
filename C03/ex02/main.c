#include<string.h>
#include<stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	pepito[] = {"Hola, Don Pepito. "};
	char	jose[] = {"Hola, Don José."};
	char	dest[100];
	char	dest2[100];
	int	index;

	index = 0;
	while (index < 18)
	{
		dest[index] = pepito[index];
		dest2[index] = pepito[index];
		index++;
	}
	printf("c  : %s\n", strcat(dest, jose));
	printf("ft : %s\n", ft_strcat(dest2, jose));
}
