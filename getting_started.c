/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getting_started.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 10:53:12 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/02 19:30:26 by kleiba           ###   ########.fr       */
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
	int			width;
	int			height;
	float		ratio;
	t_env		*e;
	float		x;
	float		b;
	int			flag;
	float		count;

	e = (t_env *)malloc(sizeof(t_env));
	get_map("maps/simple_map.jwalle", e);
	if (!glfwInit())
		exit (EXIT_FAILURE);
	window = glfwCreateWindow(1000, 1000, "ARKANOID", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	glfwMakeContextCurrent(window);
	x = 0;
	b = 0;
	flag = 0;
	count = 0.0;
	while (!glfwWindowShouldClose(window))
	{
        ratio = width / (float) height;
        glfwGetFramebufferSize(window, &width, &height);
        glViewport(0, 0, width, height);
		glClear(GL_COLOR_BUFFER_BIT);
		ft_follow(e);
		x = ft_player(x, window);
		b = ft_ball(x, b, flag, count);
		flag = ft_flag(b, flag, x, count);
		glfwSetKeyCallback(window, key_callback);
        glfwPollEvents();
        glfwSwapBuffers(window);
		if (flag == 0)
			count += 0.01;
		else
			count -= 0.01;
	}
	glfwDestroyWindow(window);
	glfwTerminate();
	return (0);
}
