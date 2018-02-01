/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 17:37:14 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/30 17:37:19 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	 ft_atoi(const char *str)
{
	int i;
	int neg;
	unsigned long int res;

	i = 0;
	res = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] =='\n' || \
			str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] != '\0') && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * neg);
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *s = "999999999999999";
	printf("my atoi: %d\n", ft_atoi(s));
	printf("original: %d\n", atoi(s));
	return (0);
}
