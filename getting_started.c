/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getting_started.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 10:53:12 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/02 15:23:06 by jwalle           ###   ########.fr       */
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
	float		ratio;
	float		x = 0;
	t_env		*e;

	e = NULL;
	e = (t_env *)malloc(sizeof(t_env));
	get_map("maps/simple_map.jwalle", e);

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
        ratio = width / (float) height;
        glfwGetFramebufferSize(window, &width, &height);
        glViewport(0, 0, width, height);
		glClear(GL_COLOR_BUFFER_BIT);
		ft_follow(e);
		if (glfwGetKey(window, GLFW_KEY_LEFT) && x < 0.65)
			x += 0.1;
		if (glfwGetKey(window, GLFW_KEY_RIGHT) && x > -0.65)
			x -= 0.1;

		glColor3f(1.0f, 0.0f, 0.0f);
		glBegin(GL_QUADS);
		glVertex2d(-(0.3f + x), -0.8f); //en bas à gauche
		glVertex2d( (0.3f - x), -0.8f); // en bas à droite
		glVertex2d( (0.3f - x), -0.76f); // en haut à droite
		glVertex2d(-(0.3f + x), -0.76f); // en haut à gauche
		glEnd();

		glfwSetKeyCallback(window, key_callback);
        glfwPollEvents();
        glfwSwapBuffers(window);
	}

	/* Quand on a plus besoin d'une fenêtre, il faut la détruire */
	glfwDestroyWindow(window);

	/*À faire juste avant de quitter l'application. Si jamais on devait réutiliser
	 GLFW, il faudrait le réinitialiser*/
	glfwTerminate();
	return (0);
}
