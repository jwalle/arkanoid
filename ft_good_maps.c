/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_good_maps.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleiba <kleiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 18:56:41 by kleiba            #+#    #+#             */
/*   Updated: 2015/05/03 19:08:32 by kleiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

char		*ft_good_maps(int i)
{
	char *str;

	i++;
	str = ft_strjoin("maps/", ft_itoa(i));
	return (ft_strjoin(str, ".jwalle"));
}
