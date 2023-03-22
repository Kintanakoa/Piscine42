#include<unistd.h>

int	ft_strlen(char *str);

int	main(void)
{
	char str[] = {'h', 'o'};
	int count = ft_strlen (&str[0]);

	count = count + '0';
	write(1, &count, 1);
	return(0);
}
