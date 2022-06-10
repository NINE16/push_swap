# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/10 15:04:31 by nnemeth           #+#    #+#              #
#    Updated: 2022/06/10 17:39:47 by nnemeth          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB		= ../Libft/libftprintf.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror #-fsanitize=address -g3

SRCS	= $(wildcard *.c)

OBJS	= ${SRCS:.c=.o}

RM		= rm -f

NAME	= push_swap

all:	${NAME}
.c.o:	
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):
		@ make -C ./Libft
		@$(CC) $(CFLAGS) $(SRCS) $(LIB) -o $(NAME)

clean:	
				echo "$(OBJS)"
				${RM} ${OBJS}
				make clean -C ./Libft

fclean:		clean	
					${RM} ${NAME}
					make fclean -C ./Libft

re:					fclean all