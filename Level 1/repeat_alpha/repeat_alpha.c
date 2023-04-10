#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int c = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				c = av[1][i] - 96;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				c = av[1][i] - 64;
			if (c != 0)
			{
				while (c > 0)
				{
					write(1, &av[1][i], 1);
					c--;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
