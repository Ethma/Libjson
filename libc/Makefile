NAME = libc.a
CC = gcc
RM = rm -f
CFLAGS = -c -Wall -Werror -Wextra
SRC_PATH = ./src
FILES = ft_strlen.c \
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
	ft_pass_spaces.c

SRC = $(addprefix $(SRC_PATH)/,$(FILES))
OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all