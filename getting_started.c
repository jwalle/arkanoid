/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getting_started.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 10:53:12 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 23:08:45 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void		error_callback(int error, const char *description)
{
	fputs(description, stderr);
	error++;
	error--;
}

void		ft_they_dis(t_env *e)
{
	ft_disp_score(e);
	ft_score(e);
	ft_follow(e);
	ft_ball_move(e);
}

static int	intoo_the_while(t_env *e, GLFWwindow *window, int width, int height)
{
	int		j;
	float	x_barre;

	j = 0;
	x_barre = 0;
	while (j == 0 && glfwGetWindowAttrib(window, GLFW_VISIBLE) &&
		height > 150 && width > 150 && e->life > 0)
	{
		glfwGetFramebufferSize(window, &width, &height);
		glViewport(0, 0, width, height);
		glClear(GL_COLOR_BUFFER_BIT);
		ft_they_dis(e);
		x_barre = ft_player(x_barre, window);
		ft_get_pos(e, x_barre);
		ft_rebond(e, window);
		if (glfwGetKey(window, GLFW_KEY_ESCAPE))
			j = -1;
		if (glfwGetKey(window, GLFW_KEY_N) || e->end == 0)
			j = 2;
		glfwPollEvents();
		glfwSwapBuffers(window);
		glRasterPos2i(100, 120);
		glColor4f(0.0f, 0.0f, 1.0f, 1.0f);
	}
	return (j);
}

int			ft_getting_started(t_env *e, int i)
{
	GLFWwindow	*window;
	int			width;
	int			height;
	int			j;

	width = 1200;
	height = 1000;
	get_map(ft_good_maps(i), e);
	if (!glfwInit())
		exit (EXIT_FAILURE);
	window = glfwCreateWindow(1200, 1000, "ARKANOID", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	glfwMakeContextCurrent(window);
	j = intoo_the_while(e, window, width, height);
	glfwDestroyWindow(window);
	return (j);
}
