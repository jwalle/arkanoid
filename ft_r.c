/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 20:36:58 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 20:38:11 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void		ft_r_fin(void)
{
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.55f, 0.96f);
	glVertex2d(-0.45f, 0.93f);
	glVertex2d(-0.45f, 0.92f);
	glVertex2d(-0.55f, 0.96);
	glEnd();
}

void		ft_r_bis(void)
{
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.46f, 0.98f);
	glVertex2d(-0.45f, 0.98f);
	glVertex2d(-0.45f, 0.95f);
	glVertex2d(-0.46f, 0.95);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.55f, 0.96f);
	glVertex2d(-0.45f, 0.96f);
	glVertex2d(-0.45f, 0.95f);
	glVertex2d(-0.55f, 0.95);
	glEnd();
	ft_r_fin();
}

void		ft_r(void)
{
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.55f, 0.98f);
	glVertex2d(-0.45f, 0.98f);
	glVertex2d(-0.45f, 0.97f);
	glVertex2d(-0.55f, 0.97);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.55f, 0.98f);
	glVertex2d(-0.54f, 0.98f);
	glVertex2d(-0.54f, 0.92f);
	glVertex2d(-0.55f, 0.92);
	glEnd();
	ft_r_bis();
}
