#include "libasm.h" 

int main(void)
{
    char	dst[200];
	int		fd;
	char	buff[200];
	ssize_t	ret;

	printf("\n__ft_strlen__\n");
	printf("1. LIB FUNC: %d\n", (int)strlen(""));
	printf("1. MY FUNC:  %d\n", (int)ft_strlen(""));
	printf("2. LIB FUNC: %d\n", (int)strlen("short str"));
	printf("2. MY FUNC: %d\n",(int)ft_strlen("short str"));
	printf("3. LIB FUNC: %d\n", (int)strlen("very loooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong str"));
    printf("3. MY FUNC:: %d\n", (int)ft_strlen("very loooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong str"));

	printf("\n__ft_strcpy__\n");
    printf("1. LIB FUNC: %s\n", strcpy(dst, ""));
	printf("1. MY FUNC:  %s\n", ft_strcpy(dst, ""));
	printf("2. LIB FUNC: %s\n", strcpy(dst, "short str"));
	printf("2. MY FUNC: %s\n", ft_strcpy(dst, "short str"));
	printf("3. LIB FUNC: %s\n", strcpy(dst, "very loooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong str"));
    printf("3. MY FUNC:: %s\n", ft_strcpy(dst, "very loooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong str"));

	printf("\n__ft_strcmp__\n");
    printf("1. LIB FUNC: %d\n", strcmp("", ""));
	printf("1. MY FUNC:  %d\n", ft_strcmp("", ""));
	printf("2. LIB FUNC: %d\n", strcmp("you are amazing", ""));
	printf("2. MY FUNC: %d\n", ft_strcmp("you are amazing", ""));
    printf("3. LIB FUNC: %d\n", strcmp("", "you are amazing"));
	printf("3. MY FUNC: %d\n", ft_strcmp("", "you are amazing"));
	printf("4. LIB FUNC: %d\n", strcmp("you are amazing", "you are amazing, baby"));
	printf("4. MY FUNC: %d\n", ft_strcmp("you are amazing", "you are amazing, baby"));
	printf("5. LIB FUNC: %d\n", strcmp("you are amazing, baby", "you are amazing"));
	printf("5. MY FUNC: %d\n", ft_strcmp("you are amazing, baby", "you are amazing"));
	

	printf("\n__ft_write__\n");
	printf("1. LIB FUNC: %zd\n", write(1, "", 0));
	printf("1. MY FUNC: %zd\n", ft_write(1, "", 0));
	printf("2. LIB FUNC: %zd\n", write(1, "Have a good day!", 16));
	printf("2. MY FUNC: %zd\n", ft_write(1, "Have a good day!", 16));
	printf("3. LIB FUNC: %zd\n", write(1, "Have a good day!", 15));
	printf("3. MY FUNC: %zd\n", ft_write(1, "Have a good day!", 15));
	printf("4. LIB FUNC: %zd\n", write(1, "Have a good day!", 17));
	printf("4. MY FUNC: %zd\n", ft_write(1, "Have a good day!", 17));
	printf("5. LIB FUNC: %zd\n", write(1, "NULL", 5));
	printf("5. MY FUNC: %zd\n", ft_write(1, "NULL", 5));
	printf("6. LIB FUNC: %zd\n", write(1, "Have a good day!", 0));
	printf("6. MY FUNC: %zd\n", ft_write(1, "Have a good day!", 0));
	printf("7. LIB FUNC: %zd\n", write(6, "Have a good day!", 16));
	printf("7. MY FUNC: %zd\n", ft_write(6, "Have a good day!", 16));
	fd = open("test.txt", O_CREAT | O_WRONLY | O_TRUNC, S_IRWXU);
	ft_write(fd, "Some text to read for you", 25);
	close(fd);	

	printf("\n__ft_read__\n");
	fd = open("test.txt", O_RDONLY);
	ret = read(fd, buff, 10);
	printf("1. LIB FUNC: %zd\n", ret);
	close(fd);
	fd = open("test.txt", O_RDONLY);
	ret = ft_read(fd, buff, 10);
	printf("1. MY FUNC: %zd\n", ret);
	close(fd);

	fd = open("test.txt", O_RDONLY);
	ret = read(fd, buff, 20);
	printf("2. LIB FUNC: %zd\n", ret);
	close(fd);
	fd = open("test.txt", O_RDONLY);
	ret = ft_read(fd, buff, 20);
	printf("2. MY FUNC: %zd\n", ret);
	close(fd);

	fd = open("libasm.h", O_RDONLY);
	ret = read(fd, buff, 111);
	printf("3. LIB FUNC: %zd\n", ret);
	close(fd);
	fd = open("libasm.h", O_RDONLY);
	ret = ft_read(fd, buff, 111);
	printf("3. MY FUNC: %zd\n", ret);
	close(fd);

	fd = open("libasm.h", O_RDONLY);
	ret = read(fd, NULL, 111);
	printf("4. LIB FUNC: %zd\n", ret);
	close(fd);
	fd = open("libasm.h", O_RDONLY);
	ret = ft_read(fd, NULL, 111);
	printf("4. MY FUNC: %zd\n", ret);
	close(fd);

	fd = open("hello", O_RDONLY);
	ret = read(fd, buff, 20);
	printf("5. LIB FUNC: %zd\n", ret);
	close(fd);
	fd = open("hello", O_RDONLY);
	ret = ft_read(fd, buff, 20);
	printf("5. MY FUNC: %zd\n", ret);
	close(fd);
	
	printf("\n__ft_strdup__\n");
	printf("1. LIB FUNC: %s\n", strdup(""));
	printf("1. MY FUNC:  %s\n", ft_strdup(""));
	printf("2. LIB FUNC: %s\n", strdup("short str"));
	printf("2. MY FUNC: %s\n", ft_strdup("short str"));
	printf("3. LIB FUNC: %s\n", strdup("very loooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong str"));
    printf("3. MY FUNC:: %s\n", ft_strdup("very loooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooong str"));
    return(0);

}