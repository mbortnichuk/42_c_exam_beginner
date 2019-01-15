/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cycle_detector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 12:34:07 by mbortnic          #+#    #+#             */
/*   Updated: 2019/01/15 12:34:08 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef	struct		s_list
{
	int				data;
	struct	s_list	*next;
}					t_list;

int		cycle_detector(const t_list *list)
{
	t_list	**tab;
	int			i = 0;
	int			j;

	if (!(tab = (t_list**)malloc(sizeof(t_list*) * 142)))
		return (1);
	while (list != NULL)
	{
		j = 0;
		while (j < i)
		{
			if (list == tab[j])
				return (1);
			j++;
		}
		tab[i++] = (t_list*)list;
		list = list->next;
	}
	return (0);
}
