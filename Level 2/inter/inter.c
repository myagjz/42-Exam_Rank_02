#include <unistd.h>

int	check(char *str, char c, int i)
{
	int k = 0;

	while (k < i)
	{
		if (str[k] == c)
			return (0);
		k++;
	}
	return (1);
}

int	main (int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			j = 0;
			while (av[2][j] != '\0')
			{
				if (av[1][i] == av[2][j])
				{
					if (check(av[1], av[1][i], i))
					{
						write (1, &av[1][i], 1);
						break;
					}
				}
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
