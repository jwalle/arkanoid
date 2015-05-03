/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ball.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 16:45:44 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 20:21:56 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void		ft_ball(float x_pos, float y_pos)
{
	float radius;

	radius = 0.02;
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2d((x_pos - radius), (y_pos - radius));
	glVertex2d((x_pos + radius), (y_pos - radius));
	glVertex2d((x_pos + radius), (y_pos + radius));
	glVertex2d((x_pos - radius), (y_pos + radius));
	glEnd();
}

void		ft_ball_move(t_env *e)
{
	float radius;
	float ratio;

	radius = 0.025;
	ratio = 1200. / 1000.;
	e->x_pos += (e->speed_x * 0.03);
	e->y_pos += (e->speed_y * 0.025);
	if (e->x_pos >= (ratio - radius) || e->x_pos <= (-ratio + radius))
		e->speed_x *= -1;
	else if (e->x_pos >= 1 || e->x_pos <= -1.0)
		e->speed_x *= -1;
	else if (e->y_pos >= 1.0 || e->y_pos <= -1.0)
		e->speed_y *= -1;
	else if (ft_collide(e))
		e->speed_y *= -1;
	ft_ball(e->x_pos, e->y_pos);
}
