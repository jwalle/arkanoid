/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disp_go.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 18:33:45 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 18:38:29 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void		ft_how_quit(void)
{
	char	*str3;
	size_t	z;

	str3 = ft_strdup("Press ESC to quit ");
	glColor3d(0.5, 0.0, 0.0);
	glRasterPos2d(+0.0, -0.2);
	z = 0;
	while (z <= ft_strlen(str3))
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, str3[z]);
		z++;
	}
}

void		ft_disp_go(void)
{
	char	*str3;
	size_t	z;

	str3 = ft_strdup("G A M E   O V E R    ");
	glColor3d(0.5, 0.0, 0.0);
	glRasterPos2d(+0.0, -0.0);
	z = 0;
	while (z <= ft_strlen(str3))
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str3[z]);
		z++;
	}
	ft_how_quit();
}
