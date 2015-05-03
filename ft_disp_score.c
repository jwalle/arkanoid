/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disp_score.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 16:10:28 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 17:29:09 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void		ft_disp_life_num(t_env *e)
{
	size_t	z;
	char	*str2;

	str2 = ft_strdup(ft_itoa(e->life));
	z = 0;
	glColor3d(0.5, 0.0, 0.0);
	glRasterPos2d(+0.9, -0.95);
	while (z <= ft_strlen(str2))
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str2[z]);
		z++;
	}
}

void		ft_disp_life(void)
{
	char	*str3;
	size_t	z;

	str3 = ft_strdup("LIFE    ");
	glColor3d(0.5, 0.0, 0.0);
	glRasterPos2d(+0.7, -0.95);
	z = 0;
	while (z <= ft_strlen(str3))
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str3[z]);
		z++;
	}
}

void		ft_disp_score(t_env *e)
{
	char	*str;
	size_t	z;

	if (e->score > 0)
	{
		str = ft_strdup(ft_itoa(e->score));
		z = 0;
		glColor3d(0.5, 0.5, 0.5);
		glRasterPos2d(-0.2, 0.937);
		while (z <= ft_strlen(str))
		{
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[z]);
			z++;
		}
		ft_disp_life_num(e);
		ft_disp_life();
	}
}
