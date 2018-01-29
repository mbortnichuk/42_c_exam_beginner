/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 11:05:59 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/29 13:41:21 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	a;
	int				tmp;

	a = 1;
	if (size != 0)
	{
		while (a <= size)
		{
			if (tab[a] < tab[a - 1])
			{
				tmp = tab[a];
				tab[a] = tab[a - 1];
				tab[a - 1] = tmp;
				a = 0;
			}
			++a;
		}
	}
}

#include <stdio.h>
int main()
{
	int tab[10];
	int i = 0;

	tab[0] = 9;
	tab[1] = 8;
	tab[2] = 4;
	tab[3] = 0;
	tab[4] = 2;
	tab[5] = 5;
	tab[6] = 7;
	tab[7] = 10;
	tab[8] = 1;
	tab[9] = 3;

	sort_int_tab(tab, 9);
	while (i <= 9)
		printf("%d\n", tab[i++]);
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	int tab[4] = {3, 5, 8, 1};
	int i = 0;

	while (i <= 3)
		printf("%d\n", tab[i++]);

	printf("---\n");
	i = 0;
	sort_int_tab(tab, 3);
	while (i <= 3)
		printf("%d\n", tab[i++]);
	return (0);
}*/
