/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:39:42 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/26 17:20:16 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
