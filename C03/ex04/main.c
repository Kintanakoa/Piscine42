#include <stdio.h>
#include<string.h>

char *ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "012340123456789";
	char to_find[] = "401";

    char fstr[] = "012340123456789";
    char fto_find[] = "401";
    
	printf("Los datos str = %s\nto_find = %s\n", str, to_find);
	printf("MI Función da %s\n", ft_strstr(str, to_find));

    printf("Los datos str = %s\nto_find = %s\n", fstr, fto_find);
    printf("LA Función da %s\n", strstr(fstr, fto_find));
    
	return (0);
}
