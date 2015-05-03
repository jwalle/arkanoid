/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ball.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 16:45:44 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 12:05:20 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

/*
** 	printf("e->x_pos = %f ; e->y_pos = %f, speed_y = %f, speed_x = %f\n",
**	e->x_pos, e->y_pos, e->speed_y, e->speed_x);
*/

void		ft_ball(float x_pos, float y_pos)
{
	float radius;
	float angle;

	radius = 0.025;
	angle = 0;
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(x_pos, y_pos);
	while (angle < 10)
	{
		glVertex2f((x_pos + sin(angle) * radius),
				(y_pos + (cos(angle)) * radius));
		angle += 0.01;
	}
	glEnd();
}

void		ft_ball_move(t_env *e)
{
	float radius;
	float ratio;

	radius = 0.025;
	ratio = (1200. / 1000.);
	e->x_pos += (e->speed_x * 0.01);
	e->y_pos += (e->speed_y * 0.02);
	if (e->x_pos >= (ratio - radius) || e->x_pos <= (-ratio + radius))
		e->speed_x *= -1;
	else if (e->x_pos >= 1 || e->x_pos <= -1.0)
	{
		e->speed_x *= -1;
	}
	else if (e->y_pos >= 1.0 || e->y_pos <= -1.0)
		e->speed_y *= -1;
	else if (e->x_pos >= 1.0 && e->y_pos >= 1.0)
	{
		e->speed_y *= 1;
		e->speed_x *= 1;
	}
	else if (e->y_pos >= (1. - radius))
		e->speed_y *= -1;
	ft_ball(e->x_pos, e->y_pos);
}
