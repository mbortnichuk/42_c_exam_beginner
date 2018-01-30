/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:40:03 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/30 17:33:17 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	rstr_capitalizer(char *s)
{
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z' && *(s + 1) != ' ' &&
			*(s + 1) != '\t' && *(s + 1) != '\n')
			ft_putchar(*s + 32);
		else if (*s >= 'a' && *s <= 'z' && (*(s + 1) == ' ' ||
			*(s + 1) == '\t' || *(s + 1) == '\n' || *(s + 1) == '\0'))
			ft_putchar(*s - 32);
		else
			ft_putchar(*s);
		s++;
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
		rstr_capitalizer(argv[i]);
		i++;
	}
	return (0);
}
