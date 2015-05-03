/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getting_started.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 10:53:12 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 19:21:51 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

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

int			ft_getting_started(t_env *e, int i)
{
	GLFWwindow	*window;
	int			width = 1200;
	int			height = 1000;
	float		x_barre;
	int			j;

	get_map(ft_good_maps(i), e);
	if (!glfwInit())
		exit (EXIT_FAILURE);
	window = glfwCreateWindow(1200, 1000, "ARKANOID", NULL, NULL);
	j = 0;
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	glfwMakeContextCurrent(window);
	x_barre = 0;
	glfwSetTime(0.);
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
		if (glfwGetKey(window, GLFW_KEY_ESCAPE))
			j = -1;
		glfwSetKeyCallback(window, key_callback);
        glfwPollEvents();
        glfwSwapBuffers(window);
		glRasterPos2i(100, 120);
		glColor4f(0.0f, 0.0f, 1.0f, 1.0f);
	}
	glfwDestroyWindow(window);
	return (j);
}
