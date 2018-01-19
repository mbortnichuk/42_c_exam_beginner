/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 12:01:40 by mbortnic          #+#    #+#             */
/*   Updated: 2017/11/19 12:45:27 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	repeat_alpha(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			k = str[i] - 65;
			while (k >= 0)
			{
				ft_putchar(str[i]);
				k--;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			k = str[i] - 97;
			while (k >= 0)
			{
				ft_putchar(str[i]);
				k--;
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
