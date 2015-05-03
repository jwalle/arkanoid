/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arkanoid.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/01 20:29:57 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 18:21:17 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARKANOID_H
# define ARKANOID_H
# define GLFW_INCLUDE_GLU

# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include <fcntl.h>
# include <stdio.h> // A RETIRER
# include <GLUT/glut.h>

# include "libft/includes/libft.h"
# include "glfw/include/GLFW/glfw3.h"

typedef struct 		s_env
{
	int				**tab;
	int				line;
	int				col;
	int				score;
	int				life;
	float 			x;
	float			speed_x;
	float			speed_y;
	float			x_pos;
	float			y_pos;
	float			x_bg;
	float			x_bd;
	float			x_hg;
	float			x_hd;
	float			y_bg;
	float			y_bd;
	float			y_hg;
	float			y_hd;
}					t_env;

typedef struct		s_brick
{
	float			xru;
	float			yru;
	float			xrd;
	float			yrd;
	float			xlu;
	float			ylu;
	float			xld;
	float			yld;
}					t_brick;

void 	get_map(char *str, t_env *e);
void	ft_follow(t_env *e);
float	ft_player(float x, GLFWwindow *window);
void	ft_ball(float x_pos, float y_pos);
int		ft_flag(float b, int flag, float x, float count);
void 	ft_ball_move(t_env *e);
int		ft_collide(t_env *e);
void	ft_score(t_env *e);
void	ft_disp_score(t_env *e);
void	ft_get_pos(t_env *e, float x_barre);
void	ft_rebond(t_env *e, GLFWwindow *window);

#endif
