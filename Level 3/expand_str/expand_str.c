#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] != '\0')
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
			{
				if (av[1][i + 1] > 32 && av[1][i + i] != '\0')
					write (1, "   ", 3);
			}
			else if (av[1][i] != ' ' && av[1][i] != '\t')
				write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}