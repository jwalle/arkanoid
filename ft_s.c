/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 20:29:26 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 20:32:38 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

static void		ft_s_final(void)
{
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-1.0f, 0.93f);
	glVertex2d(-0.9f, 0.93f);
	glVertex2d(-0.9f, 0.92f);
	glVertex2d(-1.0f, 0.92f);
	glEnd();
}

static void		ft_s_bis(void)
{
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-1.0f, 0.95f);
	glVertex2d(-0.9f, 0.95f);
	glVertex2d(-0.9f, 0.94f);
	glVertex2d(-1.0f, 0.94f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.91f, 0.94f);
	glVertex2d(-0.9f, 0.94f);
	glVertex2d(-0.9f, 0.92f);
	glVertex2d(-0.91f, 0.92f);
	glEnd();
	ft_s_final();
}

void			ft_s(void)
{
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-1.0f, 0.98f);
	glVertex2d(-0.9f, 0.98f);
	glVertex2d(-0.9f, 0.97f);
	glVertex2d(-1.0f, 0.97f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-1.0f, 0.98f);
	glVertex2d(-0.99f, 0.98f);
	glVertex2d(-0.99f, 0.95f);
	glVertex2d(-1.00f, 0.95f);
	glEnd();
	ft_s_bis();
}
