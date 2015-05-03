/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rebond.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 17:57:52 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 18:24:16 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void		ft_rebond(t_env *e, GLFWwindow *window)
{
	if (e->y_pos <= e->y_hg + 0.05 && e->x_pos >= e->x_hg - 0.05 &&
		e->x_pos <= e->x_hd + 0.05 )
		e->speed_y *= -1;
	else if (e->y_pos < e->y_bg + 0.05)
	{
		e->life--;
		e->x_pos = 0;
		e->y_pos = e->y_hg + 0.25;
		e->speed_y = 0;
		e->speed_x = 0;
	}
	if (e->speed_y == 0)
	{
		if (glfwGetKey(window, GLFW_KEY_SPACE))
		{
			e->speed_y = 1;
			e->speed_x = 1;
		}
	}
}
