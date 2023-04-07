#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int c = 0;

	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				c = av[1][i] - 64;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				c = av[1][i] - 96;
			while (c)
			{
				write (1, &av[1][i], 1);
				c--;
			}
			c = 1;
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
