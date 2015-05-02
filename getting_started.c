/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getting_started.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 10:53:12 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/02 12:00:56 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"
#include <stdio.h>

void	error_callback(int error, const char *description)
{
	fputs(description, stderr);
	error++; //ne sert à rien mais ne compile pas sinon. La fonction est supposée
	//être appelée avec glfwSetErrorCallback(error_callback)
	//cela peut être fait avant et après l'initialisation de glfw.
}

static	void key_callback(GLFWwindow *window, int key, int scancode, int action, int mods)
{
	/* ici on lui dit de quitter si escape est pressé */
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GL_TRUE);
	scancode++;
	mods++;
}

int		main(void)
{
	GLFWwindow	*window;
	int			width;
	int			height;
	/* La librairie GLFW est initialisée. Si ça fonctionne, GL_TRUE est retourné
	   sinon, GL_FALSE l'est. */
	if (!glfwInit())
		exit (EXIT_FAILURE);

	/*Va créer un fenêtre à l'aide d'OpenGL*/
	window = glfwCreateWindow(640, 480, "ARKANOID", NULL, NULL);
	//on regarde si ça a bien été créé. Sinon, cela retourne NULL
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	/* On créer un contexte OpenGL */
	glfwMakeContextCurrent(window);
	while (!glfwWindowShouldClose(window))
	{
		//Keep Running
		glfwGetFramebufferSize(window, &width, &height);
		glViewport(3, 3, width, height);
		glfwPollEvents();
		glfwSetKeyCallback(window, key_callback);
		glfwSwapInterval(1);
		glfwSwapBuffers(window);

	}

	/* Quand on a plus besoin d'une fenêtre, il faut la détruire */
	glfwDestroyWindow(window);

	/*À faire juste avant de quitter l'application. Si jamais on devait réutiliser
	 GLFW, il faudrait le réinitialiser*/
	glfwTerminate();
	return (0);
}
