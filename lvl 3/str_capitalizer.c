/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:42:17 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/30 17:32:07 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	str_capitalizer(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z' && i == 0)
			ft_putchar(s[i] - 32);
		else if (s[i] >= 'A' && s[i] <= 'Z' && i == 0)
			ft_putchar(s[i]);
		else if (s[i] >= 'a' && s[i] <= 'z' && (s[i - 1] == ' ' ||
			s[i - 1] == '\t' || s[i - 1] == '\n'))
			ft_putchar(s[i] - 32);
		else if (s[i] >= 'A' && s[i] <= 'Z' && s[i - 1] != ' ' &&
			s[i - 1] != '\t' && s[i - 1] != '\n' && i != 0)
			ft_putchar(s[i] + 32);
		else
			ft_putchar(s[i]);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (i < argc)
	{
		str_capitalizer(argv[i]);
		i++;
	}
	return (0);
}
