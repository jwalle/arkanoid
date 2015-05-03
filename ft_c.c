/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 20:32:58 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 20:33:37 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void		ft_c_bis(void)
{
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.85f, 0.93f);
	glVertex2d(-0.75f, 0.93f);
	glVertex2d(-0.75f, 0.92f);
	glVertex2d(-0.85f, 0.92);
	glEnd();
}

void		ft_c(void)
{
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.85f, 0.98f);
	glVertex2d(-0.75f, 0.98f);
	glVertex2d(-0.75f, 0.97f);
	glVertex2d(-0.85f, 0.97);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.85f, 0.98f);
	glVertex2d(-0.84f, 0.98f);
	glVertex2d(-0.84f, 0.92f);
	glVertex2d(-0.85f, 0.92);
	glEnd();
	ft_c_bis();
}
