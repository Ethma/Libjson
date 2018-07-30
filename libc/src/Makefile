# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/30 13:28:46 by mabessir          #+#    #+#              #
#    Updated: 2018/07/30 13:29:23 by mabessir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a


SRCS		= ft_strlen.c \
	ft_strjoin.c \
	ft_strdup.c \
	ft_strdel.c \
	ft_isdigit.c \
	ft_isspace.c \
	ft_pow.c \
	ft_atoi.c \
	ft_atof.c \
	ft_check_bool.c \
	ft_is_double.c \
	ft_check_null.c \
	ft_strndup.c \
	ft_pass_spaces.c \
	ft_memalloc.c
CFLAGS	 	=		-Werror -Wall -Wextra

CC			=		@gcc

OBJ			=		$(SRCS:.c=.o)


all			:		$(NAME) $(OBJ)

$(NAME)		:		$(SRCS)
					@gcc $(CFLAGS) -c $(SRCS)
					@ar rc $(NAME) $(OBJ)
					@ranlib $(NAME)

clean		:
					@/bin/rm -f $(OBJ)

fclean		:		clean
					@/bin/rm -f $(NAME)

re			:		fclean all

.PHONY		:		all clean fclean re