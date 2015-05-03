/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 16:05:15 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 17:02:16 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

/*
** first value bottom left
** second value bottom right
** third value top right
** fourth value top left
*/

float		ft_player(float x, GLFWwindow *window)
{
	if (glfwGetKey(window, GLFW_KEY_LEFT) && x < 0.65)
		x += 0.1;
	if (glfwGetKey(window, GLFW_KEY_RIGHT) && x > -0.65)
		x -= 0.1;
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2d(-(0.3f + x), -0.8f);//bas gauche
	glVertex2d((0.3f - x), -0.8f);//bas droite
	glVertex2d((0.3f - x), -0.76f);//haut droite
	glVertex2d(-(0.3f + x), -0.76f);//haut gauche
	glEnd();
	return (x);
}
