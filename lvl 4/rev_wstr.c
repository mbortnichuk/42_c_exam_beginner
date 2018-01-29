/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 15:39:24 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/23 17:52:18 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int		rev_wstr(const char *str, int len)
{
	int				i;

	while (len > 0 && (str[len] == ' ' || str[len] == '\t'))
		len--;
	i = 0;
	while (i <= len && str[len - i] != ' ' && str[len - i] != '\t')
		i++;
	write(1, str + len - i + 1, i);
	while (len > 0 && (str[len] == ' ' || str[len] == '\t'))
		len--;
	if (i < len)
		write(1, " ", 1);
	return (len - i);
}

int				main(int argc, char **argv)
{
	int				len;

	if (argc == 2)
	{
		len = 0;
		while (argv[1][len] != '\0')
			len++;
		len--;
		while (len > 0)
			len = rev_wstr(argv[1], len);
	}
	write(1, "\n", 1);
	return (0);
}
