#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(const char *s);
char *ft_strcpy(char *dst, const char *src);
int ft_strcmp(const char *s1, const char *s2);
int ft_write(int fd, const void *buf, size_t nbyte);
int ft_read(int fildes, void *buf, size_t nbyte);

int main(void)
{
    char buffer[15];
    char *str1 = "hello";
    char *str2 = "hello Anna";
    int i;
    int j;
    int		fd;
	char	buff[200];
	char	check[200];
	ssize_t	ret;

    i = ft_write(1, str1, 5);
    j = ft_read(30, str2, 3);
    printf("\n%d - %d\n", i, errno);
    printf("\n%d - %d\n", j, errno);
   // char *str = "hello, world";
    printf("STRLEN: %d\n", ft_strlen("hello"));
    printf("STRCPY: %s\n", ft_strcpy(buffer,"hello Anna"));
    printf("STRCMP: %d\n", ft_strcmp(str1, str2));
    printf("STR1 %s\n", str1);
    printf("STR2 %s\n", str2);
    	printf("\n----------ft_read----------\n");
	fd = open("tet.txt", O_RDONLY);
	ret = read(fd, buff, 10);
	printf("01)standard: %zd - %s\n", ret, strncpy(check, buff, 10));
	close(fd);
	fd = open("tet.txt", O_RDONLY);
	ret = ft_read(fd, buff, 10);
	printf("01)      my: %zd - %s\n", ret, strncpy(check, buff, 10));
	close(fd);
    return(0);

}