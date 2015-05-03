/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collide.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalle <jwalle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 22:25:22 by jwalle            #+#    #+#             */
/*   Updated: 2015/05/03 22:25:25 by jwalle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

int		ft_collide3(t_env *e, int i, int j)
{
	float	x1;
	float	y1;
	float	x2;
	float	y2;

	x1 = -1.0 + ((j - 1) * 0.2);
	y1 = 0.85 - (i * 0.05);
	x2 = -0.8 + ((j - 1) * 0.2);
	y2 = 0.9 - (i * 0.05);
	if (e->x_pos >= x1 && e->x_pos <= x2 && e->y_pos >= y1 && e->y_pos <= y2)
		return (1);
	return (0);
}

int		ft_collide2(t_env *e, int i, int j)
{
	float	radius;
	float	x1;
	float	y1;
	float	x2;
	float	y2;

	radius = 0.015;
	x1 = -1.0 + ((j - 1) * 0.2);
	y1 = 0.85 - (i * 0.05);
	x2 = -0.8 + ((j - 1) * 0.2);
	y2 = 0.9 - (i * 0.05);
	if ((((e->y_pos + radius) >= y1 && (e->y_pos - radius) <= y1)
		&& ((e->x_pos - radius) >= x1 && (e->x_pos + radius) <= x2)) ||
		(((e->y_pos + radius) >= y2 && (e->y_pos - radius) <= y2) &&
		(((e->x_pos - radius) >= x1 && (e->x_pos + radius) <= x2))))
		return (1);
	return (0);
}

int		ft_collide4(t_env *e, int i, int j)
{
	if (ft_collide3(e, i, j))
	{
		if (ft_collide2(e, i, j))
		{
			if (e->tab[i][j] > 0)
			{
				e->tab[i][j] = e->tab[i][j] - 1;
				e->score += 50;
				return (-1);
			}
		}
		else
		{
			if (e->tab[i][j] > 0)
			{
				e->tab[i][j] = e->tab[i][j] - 1;
				e->score += 50;
				return (1);
			}
		}
	}
	return (0);
}

int		ft_collide(t_env *e)
{
	int		i;
	int		j;
	int		ret;

	i = 0;
	while (i < e->line)
	{
		j = 1;
		while (j < 11)
		{
			ret = ft_collide4(e, i, j);
			if (ret != 0)
				return (ret);
			j++;
		}
		i++;
	}
	return (ret);
}
