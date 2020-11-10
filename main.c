#include <stdio.h>

int ft_strlen(const char *s);
char *ft_strcpy(char *dst, const char *src);
int strcmp(const char *s1, const char *s2);


int main(void)
{
    char buffer[15];
   // char *str = "hello, world";
    printf("STRLEN: %d\n", ft_strlen("hello"));
    printf("STRCPY: %s\n", ft_strcpy(buffer,"hello Anna"));
    printf("STRCMP: %s\n", ft_strcmp("hello Anna","hello Anna"));
    return(0);

}