/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 17:37:14 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/30 17:37:19 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int i;
	char *new;

	i = 0;
	while (src[i])
	{
		i++;
	}
	new = (char *)malloc(sizeof(*src) * i + 1);
	i = 0;
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int main()
{
	char *str = "helloworld";
	printf("my strdup: %s\n", ft_strdup(str));
	printf("original: %s\n", strdup(str));
	return (0);
}
