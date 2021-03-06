NAME = arkanoid

SRC = getting_started.c \
		ft_follow.c \
		get_map.c \
		ft_player.c\
		ft_ball.c\
		ft_score.c\
		ft_disp_score.c\
		ft_get_pos.c\
		ft_rebond.c\
		ft_gameover.c\
		ft_disp_go.c\
		main.c\
		ft_good_maps.c\
		ft_s.c\
		ft_c.c\
		ft_o.c\
		ft_r.c\
		ft_e.c\
		ft_collide.c

OBJ			=	$(SRC:.c=.o)

INC			=	-I./ -I./libft/include -I./glfw/include 
LINK		=	-L ./libft -lft -L./glfw/src/ -lglfw3 -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo -framework GLUT

CFLAGS		=	-Wall -Wextra -Werror -Wno-deprecated
CC			=	/usr/bin/gcc
RM			=	/bin/rm -v

all			:	$(NAME)

$(NAME)		:
	#git submodule update --init
	#cmake -B./glfw -H./glfw
	#make -C ./glfw
	#make -C ./libft
	$(CC) $(CFLAGS) $(SRC) $(LINK) $(INC) -o $(NAME)
	#make -C ./libft clean
	rm -rf $(OBJ)


fclean		:	clean
	#make -C ./libft fclean
	#rm -rf glfw
	rm -rf $(NAME)

re			:	fclean all

extra       :   FLAGS += $(EXTRAFLAGS)
extra       :   re

.PHONY: re fclean clean extra
