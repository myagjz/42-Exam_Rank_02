#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	int u = 0;
	char *strcpy;

	while (src[u])
		u++;
	strcpy = malloc(sizeof(*strcpy) * (u + 1));
	if (src[i] != NULL)
	{
		while (src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}
