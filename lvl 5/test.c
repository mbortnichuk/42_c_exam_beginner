#include <unistd.h>

char	*par(char *str, int way)
{
	int s;

	s = 0;
	while (*str)
	{
		if (*str == '[')
			s++;
		else if (*str == ']')
			s--;
		if (s == 0)
			return (str);
		str += way;
	}
	return (NULL);
}

void	brainfuck(char *str, char *buf)
{
	while (*str != '\0')
	{
		if (*str == '>')
			buf++;
		else if (*str == '<')
			buf--;
		else if (*str == '+')
			(*buf)++;
		else if (*str == '-')
			(*buf)--;
		else if (*str == '.')
			write(1, buf, 1);
		else if (*str == '[' && !(*buf))
			str = par(str, 1);
		else if (*str == ']' && (*buf))
			str = par(str, -1);
		str++;
	}
}

int main(int ac, char **av)
{
	char buf[2048];
	int a;

	if (ac > 1)
	{
		a = 0;
		while (a < 2048)
			buf[a++] = 0;
		brainfuck(av[1], buf);
	}
	else
		write(1, "\n", 1);
	return (0);
}
