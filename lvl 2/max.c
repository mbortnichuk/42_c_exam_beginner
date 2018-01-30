/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 17:38:33 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/30 17:38:36 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	unsigned int	i;
	int 			max;

	i = 0;
	max = tab[0];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		++i;
	}
	if (i == len)
		return (max);
	return (0);
}

int		main()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d \n", max(array, 10));
}
