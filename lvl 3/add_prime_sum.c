/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:38:25 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/19 12:07:40 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	int n;
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		n = nbr + '0';
		write(1, &n, 1);
	}
}

int		ft_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	if (str[i] == '-')
		return (0);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int		ft_is_prime(int nbr)
{
	int i;

	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_add_prime_sum(int nbr)
{
	int i;
	int count;

	i = 2;
	count = 0;
	while (i <= nbr)
	{
		if (ft_is_prime(i))
			count = count + i;
		i++;
	}
	ft_putnbr(count);
}

#include <stdio.h>
int main(int ac, char **av)
{
	/*int n = 33;
	ft_putnbr(n);
	write(1, "\n", 1);
	printf("%d\n", ft_atoi("5"));
	printf("%d\n", ft_is_prime(7));
	ft_add_prime_sum(5);
	write(1, "\n", 1);*/
	
	if (ac == 2)
		ft_add_prime_sum(ft_atoi(av[1]));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
