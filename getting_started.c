/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getting_started.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 10:53:12 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 18:25:16 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"
#include <stdio.h>

void	error_callback(int error, const char *description)
{
	fputs(description, stderr);
	error++;
	error--;
}

static	void key_callback(GLFWwindow *window, int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GL_TRUE);
	scancode++;
	scancode--;
	mods++;
	mods--;
}

int		main(void)
{
	GLFWwindow	*window;
	int			width = 1200;
	int			height = 1000;
	t_env		*e;
	float		x_barre;

	e = (t_env *)malloc(sizeof(t_env));
	get_map("maps/simple_map.jwalle", e);
	if (!glfwInit())
		exit (EXIT_FAILURE);
	window = glfwCreateWindow(1200, 1000, "ARKANOID", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	glfwMakeContextCurrent(window);
	x_barre = 0;
	glfwSetTime(0.);
	e->speed_x = 1.0;
	e->speed_y = 1.0;
	e->x_pos = 0.2;
	e->y_pos = 0.1;
	e->score = 0;
	e->life = 3;
	while (!glfwWindowShouldClose(window) &&
		   glfwGetWindowAttrib(window, GLFW_VISIBLE) &&
		   height > 150 && width > 150 && e->life > 0)
	{
        glfwGetFramebufferSize(window, &width, &height);
        glViewport(0, 0, width, height);
		glClear(GL_COLOR_BUFFER_BIT);
		ft_disp_score(e);
		ft_score(e);
		ft_follow(e);
		ft_ball_move(e);
		x_barre = ft_player(x_barre, window);
		ft_get_pos(e, x_barre);
		ft_rebond(e, window);
		glfwSetKeyCallback(window, key_callback);
        glfwPollEvents();
        glfwSwapBuffers(window);
		glRasterPos2i(100, 120);
		glColor4f(0.0f, 0.0f, 1.0f, 1.0f);
	}	
	glfwDestroyWindow(window);
	glfwTerminate();
	return (0);
}
