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

void		ft_ball(float x_pos, float y_pos /*, int flag, float count*/)
{
	/*glColor3f(0.0f, 1.0f, 0.0f);
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
	return (b);*/

	float radius = 0.025;
	float angle = 0;

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2d(x_pos, y_pos);
	while (angle < 10)
	{
		glVertex2f((x_pos + sin(angle) * radius), (y_pos + (cos(angle)) * radius));
		angle += 0.01;
	}
	glEnd();

}


void 	ft_ball_move(float dt, float x_pos, float y_pos, t_env *e)
{

	//float radius = 0.025;
	//float ratio = (4./3.);

	x_pos += e->speed_x * dt;
	y_pos += e->speed_y * dt;

	printf("x_pos = %f ; y_pos = %f, dt = %f\n", x_pos, y_pos, dt);
	

	//if (x_pos >= (ratio - radius) || x_pos <= (-ratio + radius))
	//	e->speed_x *= -1;
	//else if (x_pos >= 1 || x_pos <= -1.0)
	//{
	//	e->speed_y *= -1;
	//	printf("plop\n");
	//}
	//else if (y_pos == 1.0 || y_pos == -1.0)
	//	e->speed_y *= -1;
	if (x_pos >= 1.0 && y_pos >= 1.0)
	{
		e->speed_y *= 1;
		e->speed_x *= 1;
	}
	//if (y_pos >= (1. - radius))
	//	e->speed_y *= -1;

	ft_ball(x_pos, y_pos);
}