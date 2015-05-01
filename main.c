/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalle <jwalle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/01 20:22:40 by jwalle            #+#    #+#             */
/*   Updated: 2015/05/01 22:17:27 by jwalle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

int		main(void)
{
	GLFWwindow *win;

	if (!glfwInit())
		return (-1);
	win = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!win)
	{
		glfwTerminate();
		return (-1);
	}
	glfwMakeContextCurrent(win);
	while (!glfwWindowShouldClose(win))
	{
		glfwSwapBuffers(win);
		glfwPollEvents();
	}
	glfwTerminate();
	return(0);
}
