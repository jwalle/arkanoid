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
//	float		b = 0.0;
	int			flag;
	float		count;
	float		x_pos = 0.2;
	float		y_pos = 0.1;
	float		dt;

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
	//b = 0;
	flag = 0;
	count = 0.0;
	glfwSetTime(0.);
	e->speed_x = 1.0;
	e->speed_y = 1.0;
	//dt = glfwGetTime();
	dt = 0.0;



	while (!glfwWindowShouldClose(window) && glfwGetWindowAttrib(window, GLFW_VISIBLE))
	{
		
        ratio = width / (float) height;
        glfwGetFramebufferSize(window, &width, &height);
        glViewport(0, 0, width, height);
		glClear(GL_COLOR_BUFFER_BIT);
		ft_follow(e);
		//dt = glfwGetTime();
			if (dt >= 1)
			{
				dt -= 0.01;
				flag = 1;
			}
			else if (dt <= -1 && flag == 1)
			{
				dt += 0.01;
				flag = 0;
			}
			else if (flag == 1 && dt < 1 )
			{
				dt -= 0.01;
				flag = 1;
			}
			else
			{
				flag = 0;
				dt+= 0.01;
			}
			printf("flag = %d  ;", flag );
		ft_ball_move((dt),x_pos, y_pos, e);
		x = ft_player(x, window);
		//flag = ft_flag(b, flag, x, count);
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
