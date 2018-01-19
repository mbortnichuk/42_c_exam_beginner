/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:37:11 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/18 14:39:21 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
//#include "lvl\ 3/ft_list_size.h"


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(size_t nb)
{
	char *str;

	str = "0123456789abcdef";
	if (nb >= 16)
		ft_print_hex(nb / 16);
	ft_putchar(str[nb % 16]);
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_print_hex(atoi(av[1]));
	ft_putchar('\n');
	return (0);
}

















/*int ft_list_size(t_list *begin_list)
{
	t_list *list;
	int i;

	i = 0;
	list = begin_list;
	while (list)
	{
		i++;
		list = list->next;
	}
	return(i);
}*/

/*int *ft_rrange(int start, int end)
{
	int i;
	int *arr;

	if (start >= end)
		return (NULL);
	arr = (int*)malloc(sizeof(*arr) * (end - start));
	i = 0;
	while (start <= end)
	{
		arr[i] = start;
		start++;
		i++;
	}
	return (arr);
}

void	hidenp(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 && *s1 == *s2)
			s1++;
		s2++;
	}
	if (!*s1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
}

int main(int ac, char **av)
{
	if (ac == 3)
		hidenp(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}*/

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

/*int    ft_strcmp(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int main()
{
	char *a = "aba";
	char *b = "abz";
	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", strcmp(a, b));
	return (0);
}*/



/*void	am(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar('m' - (str[i] - 'n'));
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar('M' - (str[i] - 'N'));
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	am(av[1]);
	return(0);
}*/



/*int is_first(char *str, char c, int len)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			break ;
		i++;
	}
	if (i == len)
		return (1);
	return (0);
}

int is_instring(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void inter(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (is_instring(s2, s1[i]) && is_first(s1, s1[i], i))
			ft_putchar(s1[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac > 2)
		inter(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}*/

/*void	print_bits(unsigned char octet)
{
	int oct;
	int div;

	div = 128;
	oct = octet;
	while (div !=  0)
	{
		if (div <= oct)
		{
			write(1, "1", 1);
			oct = oct % div;
		}
		else
		{
			write(1, "0", 1);
		}
		div = div / 2;
	}
}*/

/*unsigned char swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	unsigned char last;
	unsigned char reversed;

	i = 0;
	reversed = '\0';
	while (i < 7)
	{
		last = octet & 1;
		octet >>= 1;
		reversed += last;
		reversed <<= 1;
		i++;
	}
	return (reversed);
}

 int main(int ac, char **av)
 {
 	(void)ac;
 	(void)av;
 	unsigned char octe = 2;
 	unsigned char oct = 2;
 	print_bits(reverse_bits(oct));
 	ft_putchar('\n');
 	printf("%d\n", swap_bits(oct));
	
 	return (0);
 }*/


/*void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i++], 1);
	}
	write(1, "\n", 1);
}


int main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		ft_putstr(argv[argc - 1]);
	}
	return (0);
}*/

