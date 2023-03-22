#include<stdio.h>
#include<string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
    char first[100] = "world hello ";
    char last[100] = "HELLO WORLD";
    char first2[100] = "world hello ";
    char last2[100] = "HELLO WORLD";
    int r;
    int r2;
    int size = 20;
    int size2 = 20;
    char buff[size];
    char buff2[size2];
    strcpy(buff, first);
    r = ft_strlcat(buff, last, size);
    puts(buff);
    printf("returned original: %d\n", r);
    strcpy(buff2, first2);
    r2 = ft_strlcat(buff2, last2, size2);
    puts(buff2);
    printf("returned mine: %d\n", r2);
    return (0);
}

