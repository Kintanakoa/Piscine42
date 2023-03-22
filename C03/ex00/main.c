#include<stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char *str1;
    char *str2;
    str1 = "Hellos";
    str2 = "Hello";
    printf("funcion prohibida: %i\n", strcmp(str1, str2));
    printf("mi funcion: %i\n", ft_strcmp(str1, str2));
}
