/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalle <jwalle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 13:12:26 by jwalle            #+#    #+#             */
/*   Updated: 2015/05/02 14:11:12 by jwalle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void	print_map(t_env *e)
{
	int i;
	int j;

	i = 0;
	while (i < e->line)
	{
		j = 1;
		while (j < (e->tab[i][0] + 1))
		{
			printf("%d ", e->tab[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}


int	ft_col_count(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int		*ft_fill(char *str, t_env *e)
{
	int *tab;
	int i;
	int j;
	char **tab_line;

	tab_line = ft_strsplit(str, ' ');
	j = ft_col_count(tab_line);
	if (e->col < j)
		e->col = j;
	i = 0;
	tab = ((int*)malloc((j + 1) * (sizeof(*tab))));
	tab[0] = j;
	while (++i <= j)
	{
		tab[i] = ft_atoi(tab_line[i - 1]);
		//if (!tab[i])
		//	tab[i] += 1;
	}
	return (tab);
}

int		ft_line_count(int fd)
{
	int len;
	char *line;

	len = 0;
	while (get_next_line(fd, &line) == 1)
	{
		free(line);
		len++;
	}
	return (len);
}

void get_map(char *str, t_env *e)
{
	int		fd;
	char	*temp;
	int 	i;

	fd = open(str, O_RDONLY);	
	e->line = ft_line_count(fd);
	if (!(e->tab = (int**)malloc(sizeof(int*) * (e->line + 1))))
		return ; //ft_error...
	e->tab[e->line] = 0;
	i = 0;
	fd = open(str, O_RDONLY);
	while (get_next_line(fd, &temp) == 1)
	{
		e->tab[i] = ft_fill(temp, e);
		i++;
		free(temp);
		temp = NULL;
	}
	print_map(e);
}

