/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 17:02:39 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 17:51:18 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void		ft_get_pos(t_env *e, float x_barre)
{
	e->x_bg = -(0.3f + x_barre);
	e->x_bd = (0.3f - x_barre);
	e->x_hd = (0.3f - x_barre);
	e->x_hg = -(0.3f + x_barre);
	e->y_bg = -0.8f;
	e->y_bd = -0.8f;
	e->y_hg = -0.76f;
	e->y_hd = -0.76f;
}
