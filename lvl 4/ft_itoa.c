/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 15:39:24 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/23 17:52:18 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

long int		ft_abs(long int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

int				ft_len(long int nbr)
{
	int		len;

	len = (nbr <= 0) ? 1 : 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int nbr)
{
	int			len;
	int			sign;
	char		*c;

	sign = (nbr < 0) ? -1 : 1;
	len = ft_len(nbr);
	c = (char *)malloc(sizeof(char) * len + 1);
	c[len] = '\0';
	len--;
	while (len >= 0)
	{
		c[len] = '0' + ft_abs(nbr % 10);
		nbr = ft_abs(nbr / 10);
		len--;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}

int main(int argc, char **argv)
{
	//char    *c;
	long int        nbr;

	if (argc != 2)
		return(0);
	nbr = atoi(argv[1]);
	printf("%s\n", ft_itoa(nbr));
	return (0);
}
