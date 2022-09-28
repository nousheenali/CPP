# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nali <nali@42abudhabi.ae>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 09:59:05 by nali              #+#    #+#              #
#    Updated: 2022/09/28 21:15:18 by nali             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= main

SRCS	= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS	= ${SRCS:.cpp=.o}

CC		= c++

CFLAGS	= -Wall -Werror -Wextra -std=c++98

RM		= rm -f

all:	${NAME}

.c.o:	${CC} ${CFLAGS} -I -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS}
		$(CC) ${CFLAGS} ${SRCS} -o $(NAME)
		${RM} ${OBJS}
			

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re .c.o
