/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 16:56:14 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/02 19:00:57 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

int			ft_flag(float b, int flag, float x, float count)
{
	printf("x = %f    count = %f    b = %f    flag = %d\n", x, count, b, flag);
	if (b >= 1.8)
	{
		printf("ON RETOURNE\n");
		return (1);
	}
	if (flag == 1 && b >= 0)
	{
		printf("ON CONTINUE DE RETOURNER\n");
		return (1);
	}
	return (0);
}
