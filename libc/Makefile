NAME = libc.a
CC = gcc
RM = rm -rf
INCLUDE = -I./includes
CFLAGS = -Wall -Werror -Wextra
SRC_PATH = ./src
OBJ_NAME = $(FILES:%.c=%.o)
OBJ_PATH = ./obj
FILES = ft_strlen.c \
	ft_strjoin.c \
	ft_strjoini.c \
	ft_strdup.c \
	ft_strdel.c \
	ft_isdigit.c \
	ft_isspace.c \
	ft_pow.c \
	ft_powe.c \
	ft_atoi.c \
	ft_atof.c \
	ft_check_bool.c \
	ft_is_double.c \
	ft_check_null.c \
	ft_strndup.c \
	ft_strdup.c \
	ft_strnew.c \
	ft_pass_spaces.c \
	ft_memalloc.c \
	get_next_line.c \
	ft_memmove.c \
	ft_strchr.c \
	ft_strsub.c \
	ft_memcpy.c \
	ft_strncpy.c \
	ft_strcpy.c \
	ft_free.c \
	ft_strmerge.c \
	ft_readfile.c \
	ft_strstr.c \
	ft_isalpha.c \
	ft_strncmp.c
SRC = $(addprefix $(SRC_PATH)/,$(FILES))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ_PATH) $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	$(CC) $(CFLAGS) -c $? $(INCLUDE) -o $@
$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

clean:
	$(RM) $(OBJ_PATH)

fclean: clean
	$(RM) $(NAME)
	@echo "[0;1mClear."
re: fclean all