# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnemeth <nnemeth@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/10 15:04:31 by nnemeth           #+#    #+#              #
#    Updated: 2022/07/05 14:53:08 by nnemeth          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB		= ./Libft/libft/libft.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -g #-fsanitize=address 

SRCS	=  *.c

OBJS	= ${SRCS:.c=.o}

RM		= rm -f

NAME	= push_swap

all:	${NAME}
#.c.o:	
#				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):
		@$(MAKE) -C ./Libft/libft
		@$(CC) $(SRCS) $(LIB) $(CFLAGS) -o $(NAME)

clean:	
				@${RM} $(OBJS)
				@make clean -C ./Libft/libft

fclean:		clean	
					@${RM} ${NAME}
					@make fclean -C ./Libft/libft

re:					fclean all