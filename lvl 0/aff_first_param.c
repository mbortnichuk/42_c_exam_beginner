/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:29:05 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/09 11:29:14 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	main(int ac, char **av)
{
	int	c;

	c = 0;
	if (ac >= 2)
	{
		write(1, av[1], ft_strlen(av[1]));
	}
	write(1, "\n", 1);
	return (0);
}
