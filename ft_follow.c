#include "arkanoid.h"

void	ft_follow(t_env *e)
{
	int i;
	int j;
	float x;
	float y;
	float z;

	i = 0;
	while (i < e->line)
	{
		j = 1;
		while (j < 11)
		{
			x = (j - 1) * 0.2;
			y = i * 0.05;
			if (e->tab[i][j] != 0)
			{
				z = (e->tab[i][j] / 5);
				glBegin(GL_QUADS);
				glColor3f((0.0f + z),(0.0f + z),(0.0f + z));
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