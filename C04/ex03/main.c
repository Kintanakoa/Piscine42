#include <stdio.h>
#include <stdlib.h>
int ft_atoi(char    *str);

int   main(void)
{
        char *a;

        a = "--++-+--815234ab567";

        printf("%i\n", ft_atoi(a));
        printf("%i\n", atoi(a));
        return (0);
}
