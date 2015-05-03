/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gameover.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 18:28:11 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 20:51:02 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

static	void	key_callback(GLFWwindow *window, int key, int scancode,
					int action, int mods)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GL_TRUE);
	scancode++;
	scancode--;
	mods++;
	mods--;
}

static	void	into_the_while(t_env *e, GLFWwindow *win, int width, int height)
{
	while (!glfwWindowShouldClose(win) &&
		glfwGetWindowAttrib(win, GLFW_VISIBLE) &&
		height > 150 && width > 150)
	{
		glfwGetFramebufferSize(win, &width, &height);
		glViewport(0, 0, width, height);
		glClear(GL_COLOR_BUFFER_BIT);
		ft_disp_score(e);
		ft_disp_go();
		ft_score(e);
		glfwSetKeyCallback(win, key_callback);
		glfwPollEvents();
		glfwSwapBuffers(win);
		glRasterPos2i(100, 120);
		glColor4f(0.0f, 0.0f, 1.0f, 1.0f);
	}
}

void			ft_gameover(t_env *e)
{
	GLFWwindow	*win;
	int			width;
	int			height;

	width = 1200;
	height = 1000;
	win = glfwCreateWindow(1200, 1000, "ARKANOID", NULL, NULL);
	if (!win)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	glfwMakeContextCurrent(win);
	glfwSetTime(10);
	into_the_while(e, win, width, height);
	glfwDestroyWindow(win);
	glfwTerminate();
}
