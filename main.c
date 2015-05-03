/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 18:48:14 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 19:37:21 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

int		main(void)
{
	t_env		*e;
	int			i;

	i = 0;
	e = (t_env *)malloc(sizeof(t_env));
	e->speed_x = 1.0;
	e->speed_y = 1.0;
	e->x_pos = 0.2;
	e->y_pos = 0.1;
	e->score = 0;
	e->life = 3;
	e->levels = 2;
	while (i < e->levels)
	{
		if (ft_getting_started(e, i) == -1)
			i = e->levels + 2;
		i++;
	}
	ft_gameover(e);
	free(e);
	glfwTerminate();
}
