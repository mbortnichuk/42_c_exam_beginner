#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	aff_a(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 'a')
			ft_putchar('a');
		i++;
	}
	ft_putchar('\n');
	return (*s);
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i++], 1);
	}
	write(1, "\n", 1);
}

void	sar(char *s, char a, char b)
{
	int i;

	 i = 0;
	 while (s[i] != '\0')
	 {
		if (s[i] == a)
			ft_putchar(b);
		else
			ft_putchar(s[i]);
		i++;
	 }
}

void	ulstr(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			ft_putchar(s[i] - 32);
		else if (s[i] >= 'A' && s[i] <= 'Z')
			ft_putchar(s[i] + 32);
		else
			ft_putchar(s[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		return (write(1, "\n", 1));
	}
	else
	{
		while (argv[1][i])
		{
			i++;
		}
		i--;
		while (i >= 0)
		{
			write(1, &argv[1][i], 1);
			i--;
		}
		write(1, "\n", 1);
	}

	return (0);
}
