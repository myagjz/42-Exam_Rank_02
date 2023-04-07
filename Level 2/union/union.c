#include <unistd.h>

int	check1(char *str, char c, int i)
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

int	check2(char *str, char c)
{
	int k = 0;

	while (str[k] != '\0')
	{
		if (str[k] == c)
			return (0);
		k++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int i = 0;

	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			if (check1(av[1], av[1][i], i))
				write (1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while (av[2][i] != '\0')
		{
			if (check2(av[1], av[2][i]))
			{
				if (check1(av[2], av[2][i], i))
					write (1, &av[2][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
