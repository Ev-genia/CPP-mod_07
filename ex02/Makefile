# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 11:54:51 by mlarra            #+#    #+#              #
#    Updated: 2022/11/09 13:30:08 by mlarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex02

SRCS	=	main.cpp

OBJS	=	${SRCS:.cpp=.o}

HEADERS	=	Array.hpp	Array.tpp

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

RM		=	rm -f

.PHONY	:	all clean fclean re

${NAME}	:	${OBJS} ${HEADERS}
			${CC} ${CFLAFS} ${SRCS} -o ${NAME}

all		:	${NAME}

clean	:
			${RM} ${OBJS}

fclean	:	clean
			${RM} ${NAME}

re		:	fclean all