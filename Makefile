SRC_PATH = srcs

SRC_NAME = main.c \
json_fill_value.c \
json_get_types.c \
json_init.c \
json_new_bool.c \
json_new_number.c \
json_new_object.c \
json_new_string.c \
json_value.c

OBJ_PATH = obj

CPPFLAGS = -Iincs \
	-Ilibc

LDFLAGS = -L./libc

LDLIBS = ./libc/lib.a

NAME = libjson.a

CC = gcc

CFLAGS = -Werror -Wall -Wextra


OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: dir libs $(NAME)

libs:
	make -C libc/src

dir:
	@mkdir -p $(OBJ_PATH)

$(NAME): $(OBJ) $(LDLIBS)
	ar -rc $(NAME) $(OBJ) $(LDLIBS)
	ranlib $(NAME)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	make -C libc/src clean
	rm -f $(OBJ)
	rm -rf $(OBJ_PATH)

fclean: clean
	make -C libc/src fclean
	rm -fv $(NAME)

re: fclean all
	make -C libc/src re