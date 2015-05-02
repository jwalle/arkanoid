NAME = arkanoid

SRC = getting_started.c

OBJ			=	$(SRC:.c=.o)

INC			=	-I./ -I./libft/include -I $HOME/glfw/include
LINK		=	-L ./libft -lft -L $HOME/glfw/lib -lglfw

CFLAGS		=	-Wall -Wextra -Werror
FLAGS		=	$(CFLAGS)
CC			=	/usr/bin/gcc
RM			=	/bin/rm -v

.PHONY: re fclean clean extra

all			:	$(NAME)

$(NAME)		:
#	git submodule update --init
	cmake -B./glfw -H./glfw
	make -C ./glfw
	make -C ./libft
	gcc $(FLAGS) -I$(HOME)/glfw/include/GLFW/ -L$(HOME)/glfw/lib/ -o $(NAME) $(SRC) -lglfw3 -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo
clean		:
	make -C ./libft clean
	rm -rf $(OBJ)

fclean		:	clean
	make -C ./libft fclean
#	rm -rf glfw
	rm -rf $(NAME)

re			:	fclean all

extra       :   FLAGS += $(EXTRAFLAGS)
extra       :   re

#%.o			:	%.c
#	$(CC) $(CFLAGS) $(INC) -c $< -o $@
