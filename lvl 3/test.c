/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 12:50:32 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/18 19:13:44 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
#include "ft_list_size.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] '\r' || \
			str[i] ==)
}

void	ft_px(size_t nb)
{
	char *str;

	str = "0123456789abcdef";
	if (nb >= 16)
		ft_px(nb / 16);
	ft_putchar(str[nb % 16]);
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_px(atoi(av[1]));
	ft_putchar('\n');
	return (0);
}
