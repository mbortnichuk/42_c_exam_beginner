#include <unistd.h>
int		is_first(char *s, char c, int len)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}
	if (i == len)
		return (1);
	return (0);
}

int		is_instring(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	inter(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (is_instring(s2, s1[i]) && is_first(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc > 2)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
