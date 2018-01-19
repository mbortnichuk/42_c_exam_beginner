/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:38:39 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/19 12:17:01 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	char *arg;

	if (ac == 2)
	{
		i = -1;
		arg = av[1];
		while (*arg != '\0')
		{
			while (*arg == ' ' || *arg == '\t')
				arg++;
			if (i != -1 && *arg != '\0')
				write(1, " ", 1);
			i = 0;
			while (arg[i] != '\0' && arg[i] != ' ' && arg[i] != '\t')
				i++;
			write(1, arg, i);
			arg += i;
		}
	}
	write(1, "\n", 1);
	return (0);
}
