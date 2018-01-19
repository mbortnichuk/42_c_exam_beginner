/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:39:04 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/19 12:40:13 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int		*arr;
	int		i;

	if (start >= end)
		return (NULL);
	arr = (int*)malloc(sizeof(*arr) * (end - start));
	i = 0;
	while (start <= end)
	{
		arr[i] = start;
		i++;
		start++;
	}
	return (arr);
}

#include <stdio.h>
int		 main()
{
	int *numbers;
	int i = 0;
	int start = 0;
	int end = 5;
	int numrange;
	if (end > start)
		numrange = end - start;
	else
		numrange = start - end;
	numbers = ft_rrange(start, end);
	while (i <= numrange)
		printf("%d |\n", numbers[i++]);
	return (0);
}
