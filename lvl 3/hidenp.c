/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:39:17 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/19 12:26:54 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hidenp(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 && *s1 == *s2)
			s1++;
		s2++;
	}
	if (!*s1)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		hidenp(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
