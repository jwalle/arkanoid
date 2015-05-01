NAME = arkanoid

SRC = main.c \

OBJ			=	$(SRC:.c=.o)

INC			=	-I./ -I./libft/include -I $HOME/glfw/include
LINK		=	-L ./libft -lft -L $HOME/glfw/lib -lglfw

CFLAGS		=	-Wall -Wextra -Werror -g3 -g -pedantic
FLAGS		=	$(CFLAGS)
CC			=	/usr/bin/gcc
RM			=	/bin/rm -v

all			:	$(NAME)

$(NAME)		:	$(OBJ)
	make -C ./libft
	cmake -DCMAKE_INSTALL_PREFIX:PATH=/nfs/zfs-student-4/users/2014/jwalle/glfw ./glfw
	make -C ./glfw install
	gcc -I /nfs/zfs-student-4/users/2014/jwalle/glfw/include -L /nfs/zfs-student-4/users/2014/jwalle/glfw/lib -o $(NAME) $(SRC) -lglfw
clean		:
	make -C ./libft clean
	$(RM) $(OBJ)

fclean		:	clean
	make -C ./libft fclean
	$(RM) $(NAME)

re			:	fclean all

extra       :   FLAGS += $(EXTRAFLAGS)
extra       :   re

%.o			:	%.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@
