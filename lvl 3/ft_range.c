/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:39:04 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/30 17:36:00 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_range(int start, int end)
{
	int			*range;
	int			i;

	if (start > end)
		range = (int*)malloc(sizeof(int) * (start - end));
	else
		range = (int*)malloc(sizeof(int) * (end - start + 1));
	i = 0;
	while (start != end)
	{
		range[i++] = start;
		start += (start > end) ? -1 : 1;
	}
	range[i] = start;
	return (range);
}

#include <stdio.h>
int		 main()
{
	int *numbers;
	int i = 0;
	int start = 0;
	int end = -3;
	int numrange;
	if (end > start)
		numrange = end - start;
	else
		numrange = start - end;
	numbers = ft_range(start, end);
	while (i <= numrange)
		printf("%d |\n", numbers[i++]);
	return (0);
}
