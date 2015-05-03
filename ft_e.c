/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_e.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 20:38:49 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 20:39:31 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void		ft_e_bis(void)
{
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.4f, 0.93f);
	glVertex2d(-0.3f, 0.93f);
	glVertex2d(-0.3f, 0.92f);
	glVertex2d(-0.4f, 0.92f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.4f, 0.955f);
	glVertex2d(-0.35f, 0.955f);
	glVertex2d(-0.35f, 0.945f);
	glVertex2d(-0.4f, 0.945f);
	glEnd();
}

void		ft_e(void)
{
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.4f, 0.98f);
	glVertex2d(-0.3f, 0.98f);
	glVertex2d(-0.3f, 0.97f);
	glVertex2d(-0.4f, 0.97f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.4f, 0.98f);
	glVertex2d(-0.39f, 0.98f);
	glVertex2d(-0.39f, 0.92f);
	glVertex2d(-0.4f, 0.92f);
	glEnd();
	ft_e_bis();
}
