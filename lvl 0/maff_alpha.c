/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 16:27:43 by mbortnic          #+#    #+#             */
/*   Updated: 2017/11/18 16:33:05 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	int lower;
	int upper;
	int i;

	i = 0;
	lower = 'a';
	upper = 'B';
	while (i <= 12)
	{
		ft_putchar(lower);
		ft_putchar(upper);
		lower += 2;
		upper += 2;
		i++;
	}
	ft_putchar('\n');
	return (0);
}
