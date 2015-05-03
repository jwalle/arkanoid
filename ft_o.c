/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_o.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 20:34:21 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 20:35:36 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void		ft_o_bis(void)
{
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.7f, 0.93f);
	glVertex2d(-0.6f, 0.93f);
	glVertex2d(-0.6f, 0.92f);
	glVertex2d(-0.7f, 0.92);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.62f, 0.98f);
	glVertex2d(-0.6f, 0.98f);
	glVertex2d(-0.6f, 0.92f);
	glVertex2d(-0.62f, 0.92);
	glEnd();
}

void		ft_o(void)
{
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.7f, 0.98f);
	glVertex2d(-0.6f, 0.98f);
	glVertex2d(-0.6f, 0.97f);
	glVertex2d(-0.7f, 0.97);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.7f, 0.98f);
	glVertex2d(-0.69f, 0.98f);
	glVertex2d(-0.69f, 0.92f);
	glVertex2d(-0.7f, 0.92);
	glEnd();
	ft_o_bis();
}
