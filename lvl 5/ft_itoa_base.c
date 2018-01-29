/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 15:36:24 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/19 15:51:08 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define ABS(v) ((v) < 0 ? -(v) : (v))

void	aux(int n, int b, char *ans, int *p)
{
	char	base[] = "0123456789ABCDEF";

	if (n <= -b || b <= n)
		aux(n / b, b, ans, p);
	ans[(*p)++] = base[ABS(n % b)];
}

char	*ft_itoa_base(int value, int base)
{
	char	*ans;
	int		p;

	if (base < 2 || 16 < base
		|| !(ans = (char *)malloc(sizeof(char) * 35)))
		return (NULL);
	p = 0;
	if (base == 10 && value < 0)
		ans[p++] = '-';
	aux(value, base, ans, &p);
	ans[p] = '\0';
	return (ans);
}

#include <stdio.h>
int main(void)
{
	printf("%s\n", ft_itoa_base(5156454, 10));
	return (0);
}