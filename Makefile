NAME = libasm.a

HEADER = libasm.h

SRCS =	ft_strlen.s \
		ft_strcpy.s \
		ft_strcmp.s

FLAGS = -fmacho64
CFLAGS = -Wall -Wextra - Werror

OBJS		=	${SRCS:.s=.o}

CC			= 	nasm

FLAGS		= 	-fmacho64

${NAME}:		${OBJS}
				ar rc ${NAME} ${OBJS}

.s.o:			${SRCS}
				${CC} ${FLAGS} -fmacho64 $< 

all:			${NAME}

clean:		
				rm -f ${OBJS}

fclean:			clean
				rm -f ${NAME}

re:				fclean all

test:			re
					gcc -Wall -Wextra -Werror main.c *.o && ./a.out

.PHONY: all, clean, fclean, re, test