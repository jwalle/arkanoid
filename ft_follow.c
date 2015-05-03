/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_follow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 10:49:48 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 13:49:40 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void	ft_i_follow(double x, double y, double z)
{
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f - z, 0.0f + z, 1.0f - z);
	glVertex2d((-1.0f + x), (0.85f - y));
	glVertex2d((-0.8f + x), (0.85f - y));
	glVertex2d((-0.8f + x), (0.9f - y));
	glVertex2d((-1.0f + x), (0.9f - y));
	glEnd();
}

void	ft_he_follows(double x, double y, double z)
{
	glBegin(GL_QUADS);
	glColor3f(0.0f - z, (1.0f - z), (0.0f + z));
	glVertex2d((-1.0f + x), (0.85f - y));
	glVertex2d((-0.8f + x), (0.85f - y));
	glVertex2d((-0.8f + x), (0.9f - y));
	glVertex2d((-1.0f + x), (0.9f - y));
	glEnd();
}

void	ft_follow(t_env *e)
{
	int		i;
	int		j;
	double	x;
	double	y;
	double	z;

	i = 0;
	while (i < e->line)
	{
		j = 1;
		while (j < 11)
		{
			x = (j - 1) * 0.2;
			y = i * 0.05;
			z = (e->tab[i][j] / 5.0);
			if (e->tab[i][j] != 0)
			{
				ft_he_follows(x, y, z);
				ft_i_follow(x, y, z);
			}
			j++;
		}
		i++;
	}
}


int		ft_collide(t_env *e)
{
	int		i;
	int		j;
	float	x;
	float	y;

	i = 0;
	while (i < e->line)
	{
		j = 1;
		while (j < 11)
		{
			x = - 1.0 + ((j - 1) * 0.2);
			y = 0.85 - (i * 0.05);
			if (e->x_pos >= x && e->x_pos <= (x + 0.2))
			{
				if (e->y_pos >= y && e->y_pos <= (y + 0.05))
				{
					if (e->tab[i][j] != 0)
					{
						e->tab[i][j] -= 1;
						e->score += 5;
						return (1);

					}
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}



