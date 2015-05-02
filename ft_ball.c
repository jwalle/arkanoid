/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ball.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 16:45:44 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/02 18:18:15 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

float		ft_ball(float x, float b, int flag, float count)
{
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2d(-(0.03f + count), -(0.8f - b));
	glVertex2d((0.03f - count), -(0.8f - b));
	glVertex2d((0.03f - count), -(0.76f - b));
	glVertex2d(-(0.03f + count), -(0.76f - b));
	if (flag == 0)
		b += 0.03;
	else
		b -= 0.03;
	glEnd();
	x++;
	return (b);
}
