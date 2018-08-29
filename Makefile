NAME	 = libjson.a
CC		 = gcc
OBJ_NAME = $(FILES:.c=.o)
OBJ_PATH = ./obj
CFLAGS	 = -Wall -Wextra -Werror
SRC_PATH = ./src
INCLUDE = -I./includes -I/libc/includes
FILES	 = json_fill_value.c \
json_get_types.c \
json_init.c \
json_new_bool.c \
json_new_number.c \
json_new_object.c \
json_new_string.c \
json_new_value.c 
SRC = $(addprefix $(SRC_PATH)/,$(FILES))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
L        = -L./libc
RM		 = rm -f

all: header $(NAME)

$(NAME): $(OBJ_PATH) $(OBJ)
	@tput cnorm
	@echo ""
	@echo ""
	make -C libc/
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "./[0;34m$(NAME)[0;38m created."
	@tput cnorm
	$(CC) $(CFLAGS) src/main.c libjson.a libc/libc.a
$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	$(CC) $(CFLAGS) -c $? $(INCLUDE) -o $@
clean:
	rm -rf $(OBJ_PATH)
	@echo "[0;1mClear."
$(OBJ_PATH):
	mkdir -p $(OBJ_PATH) 
fclean: 	clean
	$(RM) $(NAME)
	$(RM) a.out
	make fclean -C libc/
	@echo "[0;1mClear."

libfclean:
	make fclean -C libc/
	@echo "[0;1mClear."

header:
	@tput civis
	@clear
	@echo ""
	@echo "                     [0;34m  __  __       _        _____ _ _      "
	@echo "                      |  \/  | __ _| | _____|  ___(_) | ___ "
	@echo "                      | |\/| |/ _\` | |/ / _ \ |_  | | |/ _ \\"
	@echo "                      | |  | | (_| |   <  __/  _| | | |  __/"
	@echo "                      |_|  |_|\__,_|_|\_\___|_|   |_|_|\___|"
	@echo ""
	@echo ""
	@echo "[0;38mCompiling $(NAME)"
	@echo "[0;31m["
	@tput cup 9 $$(($(COUNTER) + 2))
	@echo "][0;36m"
	@tput cup 9 1
	@tput cnorm

re:			fclean all

.PHONY: re clean fclean all bjr