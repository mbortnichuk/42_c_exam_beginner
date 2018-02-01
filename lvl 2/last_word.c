/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 17:37:14 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/30 17:37:19 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	last_word(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' || str[i] == '\t') && \
			str[i + 1] >= 33 && str[i + 1] <= 127)
		{
			j = i + 1;
		}
		i++;
	}
	while (str[j] >= 33 && str[j] <= 127)
	{
		ft_putchar(str[j]);
		j++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	ft_putchar('\n');
	return (0);
}
