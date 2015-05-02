#include "arkanoid.h"

void	ft_follow(t_env *e)
{
	float x = 0;

	e = NULL;
	
		glColor3f(0.0f, 0.0f, 1.0f);
		glBegin(GL_QUADS);
		glVertex2d(-(0.2f + x), -0.1f); //en bas à gauche
		glVertex2d( (0.2f - x), -0.1f); // en bas à droite
		glVertex2d( (0.2f - x), -0.66f); // en haut à droite
		glVertex2d(-(0.2f + x), -0.66f); // en haut à gauche
		glEnd();

}