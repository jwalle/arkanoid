#include "arkanoid.h"

void	ft_follow(t_env *e)
{
	int i;
	int j;
	double x;
	double y;
	double z;

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
				glBegin(GL_QUADS);
				glColor3f(0.0f - z,(1.0f - z),(0.0f + z));
				glVertex2d((-1.0f + x), (0.85f - y)); // en bas à gauche
				glVertex2d((-0.8f + x), (0.85f - y)); // en bas à droite
				glVertex2d((-0.8f + x), (0.9f - y)); // en haut à droite
				glVertex2d((-1.0f + x), (0.9f - y)); // en haut à gauche
				glEnd();
				glBegin(GL_LINE_LOOP);
				glColor3f(1.0f - z, 0.0f + z, 1.0f - z);
				glVertex2d((-1.0f + x), (0.85f - y)); // en bas à gauche
				glVertex2d((-0.8f + x), (0.85f - y)); // en bas à droite
				glVertex2d((-0.8f + x), (0.9f - y)); // en haut à droite
				glVertex2d((-1.0f + x), (0.9f - y)); // en haut à gauche
				glEnd();
			}
			j++;
		}
		i++;
	}
}
// count -> x ; b -> y
/*
int		collide(t_env *e, int count, int b)
{
	double x;
	double y;

	x = (double)count;
	y = (double)b;

	while (i < e->line)
	{
		j = 1;
		while (j < 11)
		{
			x = (j - 1) * 0.2;
			y = i * 0.05;
			if (e->tab[i][j] != 0)
			{
				
					glVertex2d((-1.0f + x), (0.85f - y)); // en bas à gauche
				//if ()
					glVertex2d((-0.8f + x), (0.85f - y)); // en bas à droite

					glVertex2d((-0.8f + x), (0.9f - y)); // en haut à droite
					glVertex2d((-1.0f + x), (0.9f - y)); // en haut à gauche
			}
			j++;
		}
		i++;
	}
}*/