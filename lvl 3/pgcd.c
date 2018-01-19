/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:39:30 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/19 12:36:24 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	pgcd(int n1, int n2)
{
	int div;
	int pgcd;

	div = 1;
	if (n1 <= 0 || n2 <= 0)
		return ;
	while (div <= n1 || div <= n2)
	{
		if (n1 % div == 0 & n2 % div == 0)
			pgcd = div;
		div++;
	}
	printf("%d", pgcd);
}

int main(int ac, char **av)
{
	if (ac == 3)
		pgcd(atoi(av[1]), atoi(av[2]));
	printf("\n");
	return (0);
}
