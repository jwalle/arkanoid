/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_score.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 14:02:23 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 15:02:33 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void		ft_s(void)
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
		glBegin(GL_QUADS);
		glColor3f(0.3f, 0.3f, 0.5f);
		glVertex2d(-1.0f, 0.93f);
		glVertex2d(-0.9f, 0.93f);
		glVertex2d(-0.9f, 0.92f);
		glVertex2d(-1.0f, 0.92f);
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
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.85f, 0.93f);
	glVertex2d(-0.75f, 0.93f);
	glVertex2d(-0.75f, 0.92f);
	glVertex2d(-0.85f, 0.92);
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
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.5f);
	glVertex2d(-0.55f, 0.96f); //haut à gauche
	glVertex2d(-0.45f, 0.93f); //haut à droite
	glVertex2d(-0.45f, 0.92f); //bas à droite
	glVertex2d(-0.55f, 0.96); // bas à gauche
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

void		ft_score(t_env *e)
{
	if (e->score >= 0)
	{
		ft_s();
		ft_c();
		ft_o();
		ft_r();
		ft_e();
	}
}
