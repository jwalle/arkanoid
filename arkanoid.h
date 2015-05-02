/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arkanoid.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/01 20:29:57 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/02 18:36:54 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARKANOID_H
# define ARKANOID_H
# define GLFW_INCLUDE_GLU

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h> // A RETIRER

# include "libft/includes/libft.h"
# include "glfw/include/GLFW/glfw3.h"

typedef struct 		s_env
{
	int				**tab;
	int				line;
	int				col;
	float 			x;
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
float	ft_ball(float x, float b, int flag, float count);
int		ft_flag(float b, int flag, float x, float count);

#endif
