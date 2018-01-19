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
