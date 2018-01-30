/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 17:35:44 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/30 17:35:51 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int		i;
	int		*res;
	int		copy_start;
	int		copy_end;

	i = 0;
	copy_start = start;
	copy_end = end;
	if (start <= end)
		while (start++ <= end)
			i++;
	else
		while (start >= end++)
			i++;
	res = (int *)malloc(sizeof(int *) * i);
	i = 0;
	if (copy_start <= copy_end)
		while (copy_start <= copy_end)
			res[i++] = copy_end--;
	else
		while (copy_start >= copy_end)
			res[i++] = copy_end++;
	return (res);
}

int		main(void)
{
	int		i;
	int		*array;

	array = ft_rrange(0, -3);
	i = 0;
	while (i < 4)
	{
		printf("%i\n", array[i]);
		i++;
	}
	return (0);
}
