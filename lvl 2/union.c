/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 17:38:59 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/30 17:39:03 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_verif_char(char *s, char c, int index)
{
	int		i;

	i = 0;
	while (i < index)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int		i;
	int		len;

	i = 0;
	while (s1[i])
	{
		if (ft_verif_char(s1, s1[i], i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	len = i;
	i = 0;
	while (s2[i])
	{
		if (ft_verif_char(s2, s2[i], i) == 1)
		{
			if (ft_verif_char(s1, s2[i], len) == 1)
				write(1, &s2[i], 1);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
